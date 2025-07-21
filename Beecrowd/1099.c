#include <stdio.h>

int main()
{
    int a, b, c, d, i, n, x, y;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d%d", &a, &b);
        if(a > b)
        {
            c = a;
            d = b;
        }
        else if(b > a)
        {
            c = b;
            d = a;
        }
        else if(a==b)
        {
            c = a;
            d = b;
        }

        for(x = d + 1; x < c; x++)
        {

            if(x % 2 != 0)
                y = x + y;
        }

        printf("%d\n", y);
        y = 0;
    }

    return 0;
}
