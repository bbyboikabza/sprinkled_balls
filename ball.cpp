#include <raylib.h>
#include "ball.hpp"

void ball::draw(){
	DrawCircle(center_x, center_y , radius, BLUE);
}
