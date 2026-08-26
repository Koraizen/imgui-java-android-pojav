package dev.koraizen.imgui.android;

import org.lwjgl.opengl.GL11;
import org.lwjgl.opengl.GL20;

import java.util.Locale;

/** Selects a compatible GLSL directive from the active Pojav OpenGL context. */
public record AndroidGlProfile(String vendor, String renderer, String version, String glsl, String shaderVersion) {
    public static AndroidGlProfile detect() {
        String vendor = read(GL11.GL_VENDOR);
        String renderer = read(GL11.GL_RENDERER);
        String version = read(GL11.GL_VERSION);
        String glsl = read(GL20.GL_SHADING_LANGUAGE_VERSION);
        String lower = (version + " " + glsl).toLowerCase(Locale.ROOT);
        String shader;
        if (lower.contains("opengl es") || lower.contains("glsl es")) shader = "#version 300 es";
        else if (leadingMajor(glsl) >= 3 || glsl.startsWith("1.50")) shader = "#version 150";
        else shader = "#version 130";
        return new AndroidGlProfile(vendor, renderer, version, glsl, shader);
    }

    private static String read(int token) {
        try {
            String value = GL11.glGetString(token);
            return value == null ? "unknown" : value;
        } catch (Throwable ignored) {
            return "unavailable";
        }
    }

    private static int leadingMajor(String value) {
        try {
            int dot = value.indexOf('.');
            return Integer.parseInt((dot > 0 ? value.substring(0, dot) : value).trim());
        } catch (RuntimeException ignored) {
            return 0;
        }
    }
}

