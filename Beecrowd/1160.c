#include <stdio.h>

int main()
{
    int a, b, i, n, x = 0;
    double c, d;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d %d %lf %lf", &a, &b, &c, &d);

        for( ; a <= b; )
        {
        x++;
        a = (double) (a + (a * (c / 100.0)));
        b = (double) (b + (b * (d / 100.0)));

        if(x > 100)
            break;
        }
        if(x <= 100)
        printf("%d anos.\n", x);
        else if(x > 100)
        printf("Mais de 1 seculo.\n");

        x = 0;
    }

    return 0;
}
