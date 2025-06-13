#include<stdio.h>

int main()
{
    int a, b, i, x = 0, y = 0;
    scanf("%d%d", &a, &b);

    if(b > a)
    {
        for(i = a + 1; i < b; i++)
        {
            if(i % 2 != 0)
            {
                x = x + i;
            }
        }
        printf("%d\n", x);
    }
    else if(a > b)
    {
        for(i = b + 1; i < a; i++)
        {
            if(i % 2 != 0)
            {
                y = y + i;
            }
        }
        printf("%d\n", y);
    }

    return 0;
}
