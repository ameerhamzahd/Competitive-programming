#include <stdio.h>

int main()
{
    int a, b, c, i, n;

    for(i = 1; ; i++)
    {
        scanf("%d", &n);


        if(n != 0)
        {
            if(n % 2 == 0)
            {
                b = 0;
                for(a = n; a < (n + 10); a = a + 2)
                {
                    b = b + a;
                }
                printf("%d\n", b);
            }
            else
            {
                b = 0;
                for(a = (n + 1); a < (n + 10); a = a + 2)
                {
                    b = b + a;
                }
                printf("%d\n", b);
            }
        }
        else
            break;
    }

    return 0;
}
