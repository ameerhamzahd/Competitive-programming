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
    int a, b, ans = 0;
    cin >> a >> b;

    if (b < a)
    {
        if (a % 2 == 0)
        {
            ans = a / 2;
        }
        else
        {
            ans = (a / 2) + 1;
        }

        while ((ans % b) > 0)
        {
            ans++;
        }
    }
    else
    {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}