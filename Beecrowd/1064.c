#include <stdio.h>
#include <math.h>

int main()
{
    int i, x = 0;
    double a, b=0, z;

    for(i = 0; i <= 5; i++)
    {
        scanf("%lf", &a);

        if(a > 0)
            {
                x++;
            b = b+ a;
            }
    }
    printf("%d valores positivos\n", x);

    printf("%.1lf\n", b / x);


    return 0;
}
