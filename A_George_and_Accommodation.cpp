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
    int t, counter = 0;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;

        if (p < q && (q - p) > 1)
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}