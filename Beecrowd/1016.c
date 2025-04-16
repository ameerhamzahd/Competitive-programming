#include <stdio.h>

int main()
{
    int i, n;
    double x, y, z;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf%lf", &x, &y);

        z = x / y;

        if(y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n", z);
    }

    return 0;
}
