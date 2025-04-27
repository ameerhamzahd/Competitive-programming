#include <stdio.h>

int main()
{
    int i, j = 0, a, n;
    scanf("%d%d", &a, &n);

    for( ; (n < 0) || (n == 0); )
    {
        scanf("%d", &n);
    }

    for(i = 1; i <= n; i++)
    {
        j = j + a + (i - 1);
    }
    printf("%d\n", j);
}
