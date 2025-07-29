#include <stdio.h>

int main()
{
    int a, b, c, i, w = 0, x = 0, y = 0, z = 0;

    for(i = 1; ; i++)
    {
        scanf("%d%d\n", &a, &b);
        scanf("%d", &c);

        if(c == 1)
        {
            printf("Novo grenal (1-sim 2-nao)\n");

            if(a > b)
                x++;
            else if(b > a)
                y++;
            else if(a == b)
                z++;

            w++;
        }
        else if(c == 2)
        {
            printf("Novo grenal (1-sim 2-nao)\n");

            if(a > b)
                x++;
            else if(b > a)
                y++;
            else if(a == b)
                z++;

            w++;

            break;
        }
    }

    printf("%d grenais\n", w);
    printf("Inter:%d\n", x);
    printf("Gremio:%d\n", y);
    printf("Empates:%d\n", z);

    if (x > y)
        printf("Inter venceu mais\n");
    else if(y > x)
        printf("Gremio venceu mais\n");
    else if(x == y)
        printf("Nao houve vencedor\n");

    return 0;
}
