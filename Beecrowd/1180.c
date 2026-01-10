#include <stdio.h>

int main()
{
    int a, i, j, n, x[1000], min, pos;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    min = x[0];
    pos = 0;

    for(j = 1; j < n; j++)
    {
        if(min > x[j])
        {
            min = x[j];
            pos = j;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);

    return 0;
}
