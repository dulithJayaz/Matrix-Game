#include "check.c"

void startLoc()
{
    int x, y;

    while(1)
    {
        printf("Enter start location: ");
        scanf("%d %d", &x, &y);

        if(checkObstacle(x, y))
        {
            puts(" So you can't start from here!");  
            continue; 
        }
        else
        {
            break;
        }
    }
}