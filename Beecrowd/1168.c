#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n, y, sum;
    char x[10000];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        gets(&x[i]);

        y = strlen(x);

        sum = 0;

        for(j = 0; j <= y; j++)
        {
            if(x[j] == '0')
            sum = sum + 6;
        else if(x[j] == '1')
            sum = sum + 2;
        else if(x[j] == '2')
            sum = sum + 5;
        else if(x[j] == '3')
            sum = sum + 5;
        else if(x[j] == '4')
            sum = sum + 4;
        else if(x[j] == '5')
            sum = sum + 5;
        else if(x[j] == '6')
            sum = sum + 6;
        else if(x[j] == '7')
            sum = sum + 3;
        else if(x[j] == '8')
            sum = sum + 7;
        else if(x[j] == '9')
            sum = sum + 6;
        }

        printf("%d leds\n", sum);
    }

    return 0;
}
