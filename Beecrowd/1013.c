#include <stdio.h>

int main()
{
    int a, b, c, d, i, n, x;
    for(i = 1; ; i++)
    {
        scanf("%d%d", &a, &b);

        if(a > b)
        {
            c = a;
            d = b;
            printf("Decrescente\n");
        }
        else if(b > a)
        {
            c = b;
            d = a;
            printf("Crescente\n");
        }
        if(a == b)
        break;
    }

    return 0;
}
