#include <stdio.h>

int main()
{
    double i, n = 1.0, s = 0;

    for(i = 1.0; i <= 39; i = i + 2)
    {
        s = s + (i / n);
        n = n * 2;
    }

    printf("%.2lf\n", s);
    return 0;
}
