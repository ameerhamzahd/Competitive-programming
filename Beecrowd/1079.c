#include <stdio.h>

int main()
{
    int n, i;
    double a, b, c, d;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        d = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);
        printf("%.1lf\n", d);
    }

    return 0;
}
