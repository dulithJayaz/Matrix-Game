#ifndef functions_h // Include gaurd is used to avoid redefinition
#define functions_h

struct location {
  int x, y;
};

void displayWelcome();
void displayMatrix();
void setObstacle();
void startGame();
int check(int t);
int validateCoordinates(int x, int y);
int checkObstacle(int x, int y);

int up(int x, int y);
int down(int x, int y);
int left(int x, int y);
int right(int x, int y);
void checkMobility(struct location loc);

#endif // Ending the include guard
