int checkObstacle(int x, int y)
{
    x--;
    y--;

    if(matrix[x][y] == 1)
    {
        printf("Sorry there is already an obstacle here!");
        return 1;
    }
    else
    {
        return 0; 
    }
}

