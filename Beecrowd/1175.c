#include <stdio.h>

int main()
{
    int i, j, n[20];

    for(i = 0; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=19, j=0; i >= 0; i--, j++)
    {
        printf("N[%d] = %d\n", j, n[i]);
    }

    return 0;
}
