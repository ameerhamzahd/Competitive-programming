#include<stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(j = (n - 1); j >= 0; j--)
    {
        printf("%d ", A[j]);
    }

    printf("\n");

    return 0;
}
