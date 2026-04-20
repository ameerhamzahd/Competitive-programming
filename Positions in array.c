#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if(A[i] <= 10)
            printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
