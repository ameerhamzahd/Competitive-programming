#include <stdio.h>

int main()
{
    int p, j1, j2, r, a;
    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);

    if((p == 1) && ((j1 + j2) % 2 == 0))
    {
        if((r == 0) && (a == 0))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 0) && (a == 1))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 0))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 1))
        {
            printf("Jogador 2 ganha!\n");
        }
    }
    else if((p == 1) && ((j1 + j2) % 2 != 0))
    {
        if((r == 0) && (a == 0))
        {
            printf("Jogador 2 ganha!\n");
        }
        else if((r == 0) && (a == 1))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 0))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 1))
        {
            printf("Jogador 2 ganha!\n");
        }
    }
    else if((p == 0) && ((j1 + j2) % 2 == 0))
    {
        if((r == 0) && (a == 0))
        {
            printf("Jogador 2 ganha!\n");
        }
        else if((r == 0) && (a == 1))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 0))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 1))
        {
            printf("Jogador 2 ganha!\n");
        }
    }
    else if((p == 0) && ((j1 + j2) % 2 != 0))
    {
        if((r == 0) && (a == 0))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 0) && (a == 1))
        {
            printf("Jogador 1 ganha!\n");
        }
        else if((r == 1) && (a == 0))
        {
            printf("Jogador 2 ganha!\n");
        }
        else if((r == 1) && (a == 1))
        {
            printf("Jogador 2 ganha!\n");
        }
    }
}
