/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if(((i != j) && (a[i][j] != 0)) || ((i == j) && (a[i] [j] != 1)))
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}