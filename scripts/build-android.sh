#!/usr/bin/env bash
set -euo pipefail

NDK_ROOT="${ANDROID_NDK_HOME:-${ANDROID_NDK_ROOT:-}}"
if [[ -z "$NDK_ROOT" ]]; then
  echo "Set ANDROID_NDK_HOME or ANDROID_NDK_ROOT." >&2
  exit 1
fi

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
for ABI in arm64-v8a armeabi-v7a x86_64; do
  BUILD="$ROOT/native/build/$ABI"
  cmake -S "$ROOT/native" -B "$BUILD" -G Ninja \
    -DCMAKE_TOOLCHAIN_FILE="$NDK_ROOT/build/cmake/android.toolchain.cmake" \
    -DANDROID_ABI="$ABI" -DANDROID_PLATFORM=android-21 \
    -DANDROID_STL=c++_static -DCMAKE_BUILD_TYPE=Release
  cmake --build "$BUILD" --config Release
  DEST="$ROOT/src/main/resources/native/android/$ABI"
  mkdir -p "$DEST"
  cp "$BUILD/libimgui-java64.so" "$DEST/"
done

