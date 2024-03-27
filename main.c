#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int a, c;
  printf("Welcome to Gaussian function drawing\n");
  printf("Enter the height (a) and standard deviation (c): ");
  scanf_s("%d %d", &a, &c);
  gaussianDrawing(a, c);
  return 0;
}