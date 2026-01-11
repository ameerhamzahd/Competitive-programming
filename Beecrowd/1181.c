#include <stdio.h>

int main()
{
    int i, j, n;
    double m[12][12], sum = 0;
    char a;
    scanf("%d\n", &n);
    scanf("%c\n", &a);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);

            if(i == n)
                sum = sum + m[n][j];
        }
    }

    if(a == 'S')
        printf("%.1lf\n", sum);
    else if(a == 'M')
        printf("%.1lf\n", sum / 12);

    return 0;
}
