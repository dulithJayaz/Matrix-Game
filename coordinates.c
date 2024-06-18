#include "functions.h"
#include <stdio.h>
int arr[5] = {1, 2, 3, 4, 5};

int check(int t) {
  int i;

  for (i = 0; i < 5; i++) {
    if (t == arr[i]) {
      return 1;
    }
  }

  return 0;
}

int validateCoordinates(int x, int y) {
  if (check(x) && check(y))
    return 1;

  else {
    printf("Invalid coordinates!");
    return 0;
  }
}
