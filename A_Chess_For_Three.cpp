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
        int a, b, c, x;
        cin >> a >> b >> c;
        x = a + b + c;

        if (a == 0 && b == 0 && c == 0)
            cout << 0 << endl;
        else if (x % 2 != 0)
            cout << -1 << endl;
        else
        {
            if (a + b < c)
                cout << a + b << endl;
            else
                cout << x / 2 << endl;
        }
    }

    return 0;
}