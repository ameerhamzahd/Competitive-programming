#include <stdio.h>

int main()
{
    int i, j = 0, k = 0, x, z;
    scanf("%d%d", &x, &z);

    for( ; (x > z) || (x == z); )
    {
        scanf("%d", &z);
    }

    for(i = x; i <= z; i++)
    {
        j = j + i;
        k++;

        if(j > z)
            break;
    }
    printf("%d\n", k);

    return 0;
}
