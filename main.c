#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int a, c; // asumption b = 40 to make the chart at the middle of the screen
  printf("Welcome to Gaussian function drawing\n");
  printf("Enter the height (a <= 24) and standard deviation (c <= 15): ");
  scanf_s("%d %d", &a, &c);
  gaussianDrawing(a, c);



  return 0;
}