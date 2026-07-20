#include "ball.hpp"
#include <raylib.h>

int main() {
	const int screen_width = 1600;
	const int screen_height = 900;
	InitWindow(screen_width, screen_height, "spawning balls");

	ball Ball[20];

    while (!WindowShouldClose()) {
	    //update something

	//drawing
        BeginDrawing();
        ClearBackground(BLACK);

	for(int index = 0; index<= 20; index++){
		Ball[index].draw();
	}

        EndDrawing();
    }

    CloseWindow();
}

//compile flags g++ main.cpp -o game -lraylib
