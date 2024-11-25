/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int count_before_one(int a[], int n)
{
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            return counter;
        }

        counter++;
    }

    return counter;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = count_before_one(a, n);

    printf("%d\n", ans);

    return 0;
}