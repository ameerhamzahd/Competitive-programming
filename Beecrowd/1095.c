#include <stdio.h>
#include <math.h>

int main()
{
    int b = 1, i, j, x;

    for(i = 60; i >= 0; i = i - 5)
    {
        if(i == 60)
        {
            x = b;
            j = i;
            printf("I=%d J=%d\n", x, j);
        }
        else
        {
            b = b + 3;
            j = i;
            printf("I=%d J=%d\n", b, j);
        }
    }

    return 0;
}
