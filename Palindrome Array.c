#include<stdio.h>

int main()
{
    int a, i, j, k, n, flag = 0;
    scanf("%d", &n);
    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(j = 0, k = (n - 1); j <= k; j++, k--)
    {
        if(A[j] != A[k])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
