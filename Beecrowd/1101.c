#include <stdio.h>

int main()
{
    int a, b, c, d, i, n = 0, x;
    for(x = 1;; x++)
    {
        scanf("%d%d", &a, &b);

        if((a > b) || (a == b))
        {
            c = a;
            d = b;
        }
        else if(b > a)
        {
            c = b;
            d = a;
        }
        if((a <= 0) || (b <= 0)) break;


        for(i = d; i <= c; i++)
        {
            printf("%d ", i);
            n = n + i;
        }

        printf("Sum=%d\n", n);
        n = 0;
    }

    return 0;
}
