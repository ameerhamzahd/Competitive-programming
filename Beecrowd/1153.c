#include <stdio.h>

int main()
{
    int a, b, c = 1, d, i, j, n;
    scanf("%d", &n);

    if(n == 1)
        d = n;
    else
    {
        for(i = 1; i <= (n - 1); i++)
        {
            if(i == 1)
                a = n;
            else
            {
                b = n - (i - 1);
                c = c * b;
            }
            d = a * c;
        }
    }
    printf("%d\n", d);

    return 0;
}
