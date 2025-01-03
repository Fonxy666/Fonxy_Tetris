#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main() {
	InitWindow(300, 600, "raylib Tetris");
	Color darkBlue = { 44, 44, 127, 255 };
	SetTargetFPS(60);

	Grid grid = Grid();
	grid.Print();

	TBlock block = TBlock();

	while (WindowShouldClose() == false) {
		BeginDrawing();
		ClearBackground(darkBlue);
		grid.Draw();
		block.Draw();

		EndDrawing();
	}

	CloseWindow();
}