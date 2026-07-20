#pragma once
#include "rand_vals.hpp"

class ball{
	public:
		int center_x = rand_cords();
		int center_y = rand_cords();

		double radius = 90;

		void draw();
};
//    void DrawCircle(int centerX, int centerY, float radius, Color color);  Draw a color-filled circle
