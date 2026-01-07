#include <stdio.h>

int main()
{
    int i, j = 0, n[1000], x;
    scanf("%d", &x);

    for(i = 0; i < x; i++)
    {
        n[i] = i;
    }

    for(i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, n[j]);
        j++;
        if(j == x)
            j = 0;
    }

    return 0;
}
