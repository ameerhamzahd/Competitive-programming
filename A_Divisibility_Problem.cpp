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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, counter = 0;
        cin >> a >> b;

        if (b > a)
        {
            cout << b - a << endl;
        }
        else if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (b - (a % b)) << endl;
        }
    }

    return 0;
}