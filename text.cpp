#include "text.hpp"

void drawText(char *input, int &letter_count, float font_size,
              Color text_color) {
  int key = GetCharPressed();
  while (key > 0) {
    if ((key >= 0) && (key <= 256)) {
      input[letter_count] = (char)key;
      letter_count++;
      input[letter_count] = '\0';
    }
    key = GetCharPressed();
  }

  if (IsKeyPressed(KEY_BACKSPACE)) {
    letter_count--;
    if (letter_count < 0)
      letter_count = 0;
    input[letter_count] = '\0';
  }

  DrawText(input, 10, 10, font_size, text_color);
}
void saveText() {}
