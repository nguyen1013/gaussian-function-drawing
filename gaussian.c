#include <stdio.h>
#include <math.h>
#include "screen.h"

void gaussianDrawing(int a, int c) {
  int x, y;
  clearScreen();
  gotoXY(1, 30);
  setBGcolor(YELLOW);
  setFGcolor(BLUE);
  printf("GAUSSIAN FUNCTION CHART"); // TITLE
  resetColors();
  
  for (y = a; y > 0; y--) {
    x = ceil(c * sqrt(2 * log((double)a / y)));
    setFGcolor(RED + y % 7);    
    gotoXY(24 - y, 40 - x);
    for (int i = 0; i < 4 * x + 1; i+=2) {
      printf("|");
    }
  }
  resetColors();
}