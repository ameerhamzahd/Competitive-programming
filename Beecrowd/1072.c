#include<stdio.h>

int main()
{
    int a = 0, b = 0, i, n, x;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        if((x >= 10) && (x <= 20))
            a++;
        else if ((x < 10) || (x > 20))
            b++;
    }
    printf("%d in\n", a);
    printf("%d out\n", b);

    return 0;
}
