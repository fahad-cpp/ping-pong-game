#pragma once

inline int clamp(int min, int num, int max) {
	if (num < min) {
		return min;
	}
	if (num > max) {
		return max;
	}
	return num;
}