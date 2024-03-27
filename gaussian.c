#include <stdio.h>
#include <math.h>
#include "screen.h"

void gaussianDrawing(int a, int c) {
  int x, y; // coordinate variables (x=0 at column 40, and y=1 at the row 25)
  clearScreen();
  gotoXY(1, 30);

  // set style for the TITLE
  setBGcolor(YELLOW);
  setFGcolor(BLUE);
  printf("GAUSSIAN FUNCTION CHART"); // TITLE
  resetColors();

  // start drawing Gaussian  
  for (y = a; y > 0; y--) {
    x = ceil(c * sqrt(2 * log((double)a / y))); // solving x according to y from the Gaussian function y = a*e^(-x^2/(2*c^2)
    setFGcolor(RED + y % 7);    
    gotoXY(26-y, 40 - x); // drawing from the top of the chart, with column from 40-x to the column 40+x;
    for (int i = 0; i < 4 * x + 1; i+=2) { 
      printf("|");
    }
  }
  resetColors();
}