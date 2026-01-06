#include <stdio.h>

int main()
{
    long long int a[61], b = 0, c = 1, sum = 0;
    int i, j, k, n;
    a[0] = 0;
    a[1] = 1;

    for(i = 2; i < 61; i++)
    {
        sum = b + c;
        b = c;
        c = sum;
        a[i] = c;
    }

    scanf("%d", &n);

    for(j = 0; j < n; j++)
    {
        scanf("%d", &k);

        printf("Fib(%d) = %lld\n", k, a[k]);
    }

    return 0;
}
