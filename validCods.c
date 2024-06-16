int check(int t, int arr[])
{
  int i;
  
  for(i = 0; i < 5; i++)
  {
    if (t == arr[i])
    {
      return 1;
    }
  }
  
  return 0;
}

int validCods(int x, int y)
{
    int arr[5] = {1, 2, 3, 4, 5};

    if(check(x, arr) && check(y, arr))
    {
        return 1;
    }
    else
    {
        puts("Invalid coordinates!");
        return 0;
    }
}

