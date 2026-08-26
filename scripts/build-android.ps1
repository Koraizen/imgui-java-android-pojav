param(
    [Parameter(Mandatory = $true)][string]$NdkRoot,
    [string[]]$Abis = @("arm64-v8a", "armeabi-v7a", "x86_64"),
    [int]$MinSdk = 21
)

$ErrorActionPreference = "Stop"
$repoRoot = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$nativeRoot = Join-Path $repoRoot "native"
$toolchain = Join-Path $NdkRoot "build\cmake\android.toolchain.cmake"
if (!(Test-Path -LiteralPath $toolchain)) { throw "Invalid Android NDK: $NdkRoot" }

foreach ($abi in $Abis) {
    $buildDir = Join-Path $nativeRoot "build\$abi"
    cmake -S $nativeRoot -B $buildDir -G Ninja `
        "-DCMAKE_TOOLCHAIN_FILE=$toolchain" `
        "-DANDROID_ABI=$abi" `
        "-DANDROID_PLATFORM=android-$MinSdk" `
        "-DANDROID_STL=c++_static" `
        "-DCMAKE_BUILD_TYPE=Release"
    if ($LASTEXITCODE -ne 0) { throw "CMake configure failed for $abi" }
    cmake --build $buildDir --config Release
    if ($LASTEXITCODE -ne 0) { throw "Native build failed for $abi" }
    $destination = Join-Path $repoRoot "src\main\resources\native\android\$abi"
    New-Item -ItemType Directory -Force $destination | Out-Null
    Copy-Item -LiteralPath (Join-Path $buildDir "libimgui-java64.so") -Destination $destination -Force
}

