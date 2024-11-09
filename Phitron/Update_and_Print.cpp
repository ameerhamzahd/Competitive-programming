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
    long long n;
    cin >> n;
    long long a[n];

    for(long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long x, v;
    cin >> x >> v;

    a[x] = v;

    for(long long i = (n - 1); i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}