#include<stdio.h>
#include<math.h>

int main()
{
    int a, i, x = 0;

    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &a);

        if(a % 2 == 0)
        {
            x++;
        }
    }
    printf("%d valores pares\n", x);

    return 0;
}


