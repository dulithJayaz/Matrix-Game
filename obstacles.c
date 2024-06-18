#include "functions.h"
#include <stdio.h>
extern int matrix[5][5];

int checkObstacle(int x, int y) {
  x--;
  y--;

  if (matrix[x][y] == 1) {
    printf("Sorry there is already an obstacle here!");
    return 1;
  } 
  else
    return 0;
}

void setObstacle() {
  int i, x, y;

  for (i = 0; i < 5; i++) {
    printf("Enter location of obstacle %d: ", i + 1);
    scanf("%d %d", &x, &y);

    if (validateCoordinates(x, y) && !checkObstacle(x, y)) {
      x--, y--;
      matrix[x][y] = 1;
    } 
    else {
      puts("");
      i--;
      continue;
    }
  }

  puts("\nPlacing obstacles complete!");
}
