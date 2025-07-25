#include <stdio.h>

int main()
{
    int a, i;

    for(i = 1;  ; i++)
    {
        scanf("%d", &a);

        if (a != 2002)
            printf("Senha Invalida\n");
        else if(a == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }
}
