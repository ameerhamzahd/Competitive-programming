#include<stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("PERFECTION OUTPUT\n");

    for( ; ; )
    {
        scanf("%d", &n);

        if(n == 0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        for(i = 1; i < n; i++)
        {
            if((n % i) == 0)
                sum = sum + i;
        }

        if(sum == n)
            printf("%5d  PERFECT\n", n);
        else if(sum < n)
            printf("%5d  DEFICIENT\n", n);
        else if(sum > n)
            printf("%5d  ABUNDANT\n", n);

            sum = 0;
    }

    return 0;
}
