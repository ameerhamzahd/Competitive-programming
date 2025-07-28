#include <stdio.h>

int main()
{
    int x, y, z;
    double a, b, c, m = 0, n = 0, p;

    for(a = 0; ; a++)
    {
        for(x = 1; ; x++)
        {
            scanf("%lf", &b);

            if((b >= 0) && (b <= 10))
            {
                m++;
                n = n + b;
            }

            else
            {
                printf("nota invalida\n");
            }

            if(m == 2)
            {
                p = n / 2;
                printf("media = %.2lf\n",p);
                m = 0;
                n = 0;
                break;
            }
        }

        for(y = 1; ; y++)
        {
            scanf("%d", &z);
            printf("novo calculo (1-sim 2-nao)\n");

            if((z == 1) || (z == 2))
                break;
        }
        if (z == 1)
            continue;
        else
            break;
    }

    return 0;
}
