#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 1, i, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", a, a * a, a * a * a);

        a = a;
        b = a * a;
        c = a * b;

        printf("%d %d %d\n", a, b + 1, c + 1);

        a++;
    }

    return 0;
}
