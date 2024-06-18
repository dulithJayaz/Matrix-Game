#include "functions.h"
#include <stdio.h>
#include <string.h>
char move[100] = "You can move";
int matrix[5][5] = {0};

int main() 
{
  displayWelcome();
  setObstacle();
  displayMatrix();
  struct location start;

  while (1) 
  {
    printf("Enter start location: ");
    scanf("%d %d", &start.x, &start.y);

    if (validateCoordinates(start.x, start.y) && !checkObstacle(start.x, start.y)) 
    {
      checkMobility(start);
      break;
    }

    else {
      puts(" So you can't start from here!");
      continue;
    }
  }

  printf("%s", move);
  return 0;
}
