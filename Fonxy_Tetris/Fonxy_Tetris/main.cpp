#include <raylib.h>
#include "grid.h"

int main() {
	InitWindow(300, 600, "raylib Tetris");
	Color darkBlue = { 44, 44, 127, 255 };
	SetTargetFPS(60);

	Grid grid = Grid();
	grid.Print();

	while (WindowShouldClose() == false) {
		BeginDrawing();
		ClearBackground(darkBlue);

		EndDrawing();
	}

	CloseWindow();
}