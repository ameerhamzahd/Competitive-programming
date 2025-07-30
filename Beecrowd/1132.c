#include <stdio.h>

int main()
{
    int i, n = 0, x, y;
    scanf("%d%d", &x, &y);

    if(x > y)
    {
        for(i = y; i <= x; i++)
        {
            if (i %13 != 0)
                n = n + i;
        }
        printf("%d\n", n);
    }
    else if(y > x)
    {
        for(i = x; i <= y; i++)
        {
            if (i %13 != 0)
                n = n + i;
        }
        printf("%d\n", n);
    }
    return 0;
}
