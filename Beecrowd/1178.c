#include <stdio.h>

int main()
{
    double x, n[100];
    int i, j = 0;
    scanf("%lf", &x);

    n[0] = x;
    printf("N[0] = %.4lf\n", n[0]);

    for(i = 1; i < 100; i++)
    {
        n[i] = n[0] / 2;
        n[0] = n[i];

        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}
