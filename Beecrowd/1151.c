#include <stdio.h>

int main()
{
    int  i, n, x = 0, y = 1, z;
    scanf("%d", &n);

    printf("0");

    for(i = 1; i < n; i++)
    {
        if(i <= 1)
            z = i;
        else
        {
            z = x + y;
            x = y;
            y = z;
        }
        printf(" %d", z);
    }
    printf("\n");

    return 0;
    }
