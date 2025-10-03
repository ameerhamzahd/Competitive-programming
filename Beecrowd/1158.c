#include <stdio.h>

int main()
{
    int a, b, c, i, n, x, y;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);

        if(x % 2 == 0)
        {
            c = 0;
            for(a = (x + 1); a < (x  + (y * 2)); a = a + 2)
            {
                c = c + a;
            }
            printf("%d\n", c);
        }
        else
        {
            c = 0;
            for (a = x; a < (x + (y * 2)) ; a = a + 2)
            {
                c = c + a;
            }
            printf("%d\n", c);
        }
    }

    return 0;
}
