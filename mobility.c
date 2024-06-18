#include "functions.h"
#include <stdio.h>
#include <string.h>
extern int matrix[5][5];
extern char move[100];

int up(int x, int y) 
{
  x--;
  y--;

  if (x - 1 >= 0 && matrix[x - 1][y] == 0) {
    strcat(move, " up,");
    return 1;
  } 
  else
    return 0;
}

int down(int x, int y) {
  x--;
  y--;

  if (x + 1 <= 4 && matrix[x + 1][y] == 0) {
    strcat(move, " down,");
    return 1;
  } 
  else
    return 0;
}

int left(int x, int y) {
  x--;
  y--;

  if (y - 1 >= 0 && matrix[x][y - 1] == 0) {
    strcat(move, " left,");
    return 1;
  } 
  else
    return 0;
}

int right(int x, int y) {
  x--;
  y--;

  if (y + 1 <= 4 && matrix[x][y + 1] == 0) {
    strcat(move, " right");
    return 1;
  } 
  else
    return 0;
}

void checkMobility(struct location loc) {
  int x = loc.x;
  int y = loc.y;

  int u = up(x,y);
  int d = down(x,y);
  int l = left(x,y);
  int r = right(x,y);
  
  if (!(u || d || l || r)) {
    strcat(move, " nowhere!");
  }
}
