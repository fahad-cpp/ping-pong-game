#pragma once
#include <Windows.h>
#include <stdint.h>
#define internal static

extern bool running;
struct Render_State {
	int height;
	int width;
	void* memory;
	BITMAPINFO bitmapinfo;
};
extern Render_State render_state;
extern float render_scale;