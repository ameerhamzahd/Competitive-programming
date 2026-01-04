#include <stdio.h>

int main()
{
    double a[100];
    int i, x = 100;

    for(i = 0; i < x; i++)
    {
        scanf("%lf", &a[i]);

        if(a[i] > 10)
            continue;

        printf("A[%d] = %.1lf\n", i, a[i]);
    }

    return 0;
}
