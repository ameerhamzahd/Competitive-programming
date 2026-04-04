#include<stdio.h>

int main()
{
    int i, n, chk = 100001, position;
    scanf("%d", &n);
    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if(A[i] < chk)
        {
            chk = A[i];
            position = i + 1;
        }
    }

    printf("%d %d\n", chk, position);

    return 0;
}
