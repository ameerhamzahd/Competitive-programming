#include <stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int i, m, n;
    double a = 0, b = 0, c = 0, t, pdc, pdr, pds;
    char e;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d %c", &m, &e);

        if(e == 'C')
            a = a + m;
        else if(e == 'R')
            b = b + m;
        else if(e == 'S')
            c = c + m;
    }

    t = a + b + c;
    pdc = (a * 100) / t;
    pdr = (b * 100) / t;
    pds = (c * 100) / t;

    printf("Total: %.0lf cobaias\n", t);
    printf("Total de coelhos: %.0lf\n", a);
    printf("Total de ratos: %.0lf\n", b);
    printf("Total de sapos: %.0lf\n", c);
    printf("Percentual de coelhos: %.2lf %%\n", pdc);
    printf("Percentual de ratos: %.2lf %%\n", pdr);
    printf("Percentual de sapos: %.2lf %%\n", pds);

    return 0;
}
