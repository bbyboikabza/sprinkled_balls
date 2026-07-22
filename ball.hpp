#pragma once
#include <raylib.h>
#include "rand_vals.hpp"

class ball{
	public:
		int center_x = rand_val(0,1600);
		int center_y = rand_val(0,900);

		double radius = rand_val(20,50);
		Color color = {static_cast<unsigned char>(rand_val(0,225)),static_cast<unsigned char>(rand_val(0,225)), static_cast<unsigned char>(rand_val(0,225)), 255} ; 

		void draw();
};
//    void DrawCircle(int centerX, int centerY, float radius, Color color);  Draw a color-filled circle
