#include <stdio.h>

int main()
{
    int n = 10, i, x[10];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);

        if(x[i] <= 0)
            printf("X[%d] = 1\n", i);
        else
            printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}
