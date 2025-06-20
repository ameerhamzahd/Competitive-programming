#include<stdio.h>

int main()
{
    int n, i, a;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a);

        if((a % 2 != 0) && (a < 0))
            printf("ODD NEGATIVE\n");
        if((a % 2 != 0) && (a > 0))
            printf("ODD POSITIVE\n");
        if((a % 2 == 0) && (a < 0))
            printf("EVEN NEGATIVE\n");
        if((a % 2 == 0) && (a > 0))
            printf("EVEN POSITIVE\n");
        if (a == 0)
            printf("NULL\n");
    }

    return 0;
}
