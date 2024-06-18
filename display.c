#include <stdio.h>

// Importing the global variable from main program
extern int matrix[5][5];

void displayWelcome()
{
  puts("This is game in which you have to place 5 obstacles within a 5 by 5 matrix and move through it.");
  puts("Give valid (x,y) coordinates for the obstacles.");
  puts("Eg: 3 4 - here 3 is the x-coordinate and 4 is the y-coordinate.\n");
}

void displayMatrix() 
{
  int i, j;
  puts("");

  for (i = 0; i < 5; i++) 
  {
    for (j = 0; j < 5; j++) 
    {
      printf("%2d", matrix[i][j]);
    }
    puts("");
  }

  puts("");
}