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
        int a, b, c, d, x;
        cin >> a >> b >> c >> d;
        int flag1 = 0, flag2 = 0;

        x = max(a, b);
        a = min(a, b);
        b = x;

        for (int i = a; i <= b; i++)
        {
            if (i == c)
                flag1 = 1;

            if (i == d)
                flag2 = 1;
        }

        if ((flag1 == 1 && flag2 == 1) || (flag1 == 0 && flag2 == 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}