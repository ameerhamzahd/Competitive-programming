#include <stdio.h>

int main()
{
    double b, x, n = 0;
    int a = 0, i;

    for(i = 0; ; i++)
    {
        scanf("%lf", &b);

        {
            if((b >= 0) && (b <= 10))
            {
                n = n + b;
                a++;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        if(a == 2)
            break;
    }
    x = n / 2;
    printf("media = %.2lf\n", x);

    return 0;
}
