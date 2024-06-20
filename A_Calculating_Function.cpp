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

int main()
{
    long long n, sum = 0;
    cin >> n;

    if (n % 2 == 0)
        sum = n / 2;
    else
        sum = -n + (n / 2);

    cout << sum << endl;

    return 0;
}