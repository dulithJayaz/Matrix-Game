#include "validCods.c"
#include "checkObstacle.c"

void setObstacle(&array[5][5])
{
    int i, x, y;

    for(i = 0; i < 5; i++)
    {
        printf("Enter location of obstacle %d", i+1);
        scanf("%d %d", &x &y);
        if(validCods(x, y))
        {
            if(checkObstacle(x, y))
            {
                continue;
            }
            else
            {
                array[x][y] = 1;
            }
        }
        else
        {
            continue;
        }
    }

    puts("Placing obstacles complete!");
}