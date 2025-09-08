#include <stdio.h>

int main()
{
    double i = 1.0, s = 0;

    for(i = 1; i <= 100; i++)
    {
        s = s + (1 / i);
    }
    printf("%.2lf\n", s);

    return 0;
}
