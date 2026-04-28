#include <stdio.h>

void min_max(int A[], int N)
{
    int min = A[0];
    int max = A[0];
    int i;

    for (i = 1; i < N; i++)
    {
        if (A[i] < min)
            min = A[i];

        if (A[i] > max)
            max = A[i];
    }

    printf("%d ", min);
    printf("%d\n", max);
}

int main()
{
    int i, N;
    scanf("%d", &N);

    int A[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    min_max(A, N);

    return 0;
}
