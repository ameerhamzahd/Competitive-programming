#include <stdio.h>

int main()
{
    int i, j, x = 0;
    double m[12][12], sum = 0;
    char a;
    scanf("%c", &a);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);

            if(i > j)
            {
                sum = sum + m[i][j];

                x++;
            }
        }
    }

    if(a == 'S')
        printf("%.1lf\n", sum);
    else if(a == 'M')
        printf("%.1lf\n", sum / x);

    return 0;
}

