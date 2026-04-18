#pragma once
#include <stdint.h>
void clear_screen(uint32_t color);
void draw_rect_in_pixel(int x0, int y0, int x1, int y1, uint32_t color);
void draw_rect(float x, float y, float half_size_x, float half_size_y, uint32_t color);
void draw_number(int number,float x,float y, float size, uint32_t color);
void draw_text(const char* text, float x, float y, float size, uint32_t color);