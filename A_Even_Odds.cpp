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
    long long a, b, temp, ans;
    vector<long long> v;
    cin >> a >> b;

    if (a % 2 == 0)
    {
        temp = a / 2;

        if (b > temp)
    {
        ans = (b - temp) * 2;
    }
    else
    {
        ans = (b * 2) - 1;
    }
    }
    else
    {
        temp = a / 2 + 1;

        if (b > temp)
    {
        ans = (b - temp) * 2;
    }
    else
    {
        ans = (b * 2) - 1;
    }
    }

    cout << ans << endl;

    return 0;
}