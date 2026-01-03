#include <stdio.h>

int main()
{
    int x = 10, i, n[10], y;
    scanf("%d", &n[0]);

    printf("N[0] = %d\n", n[0]);

    y = n[0];

    for(i = 1; i < x; i++)
    {
        y = y * 2;

        printf("N[%d] = %d\n", i, y);
    }

    return 0;
}
