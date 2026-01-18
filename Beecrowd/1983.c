#include <stdio.h>

int main()
{
    int a, i, n;
    double b, c = 0.0, d = 0.0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d %lf", &a, &b);

        if(b > c)
        {
            c = b;
            d = a;
        }
    }
    if(c <= 8)
        printf("Minimum note not reached\n");
    else
        printf("%.0lf\n", d);

    return 0;
}
