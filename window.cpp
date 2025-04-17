#include "window.hpp"

void displayWindow(int width, int height, const char *title){
  char input[256] = "";
  int letter_count = 0;
  InitWindow(width, height, title);
  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
    ShowCursor();
    drawText(input, letter_count, 20, WHITE) ;
    EndDrawing();
  }
  CloseWindow();
}
