#include <stdio.h>

int main()
{
    int a = 7, i, x;

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
        else if(i != 1)
        {
            i = i;
            printf("I=%d J=%d\n", i, a + 2);
            printf("I=%d J=%d\n", i, a + 1);
            printf("I=%d J=%d\n", i, a);
        }
    }

    return 0;
}
