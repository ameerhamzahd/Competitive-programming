#include <stdio.h>

int main()
{
    int i;
    double n, x = 0, y = 0, z;

    for(i = 1; ; i++)
    {
        scanf("%lf", &n);

        if(n < 0)
            break;
        else
        {
            x = x + n;
            y++;
        }
    }
    z = x / y;
    printf("%.2lf\n", z);

    return 0;
}
