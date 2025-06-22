#include <stdio.h>

int main()
{
    int a, b = 0, c, i;

    for(i = 1; i <= 100; i++)
    {
        scanf("%d", &a);

        if(a > b)
        {
            b = a;
            c = i;
        }
    }
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
