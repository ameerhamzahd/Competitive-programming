#include <stdio.h>

int main()
{
    int a = 7, i, n;

    for(i = 1; i <= 10; i = i + 2)
    {
        if(i == 1)
        {
            a = a;
            printf("I=%d J=%d\n", i, a);
            a = a - 1;
            printf("I=%d J=%d\n", i, a);
            a = a - 1;
            printf("I=%d J=%d\n", i, a);
        }
        else
        {
            a = a + 4;
            printf("I=%d J=%d\n", i, a);
            a = a - 1;
            printf("I=%d J=%d\n", i, a);
            a = a - 1;
            printf("I=%d J=%d\n", i, a);
        }
    }

    return 0;
}
