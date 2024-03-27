#ifndef SCREEN_H
#define SCREEN_H
#pragma once
enum COLORS {
	BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
};

void gaussianDrawing(int a, int c);
void clearScreen(void);
void gotoXY(int row, int col);
void setFGcolor(int color);
void resetColors(void);
void setBGcolor(int color);
#endif // !SCREEN_H