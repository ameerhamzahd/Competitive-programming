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
    int t, tiger = 0, pathan = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            tiger++;
        }
        else if (a < b)
        {
            pathan++;
        }
        else
        {
            tiger++;
            pathan++;
        }
    }

    if (tiger > pathan)
    {
        cout << "Tiger" << endl;
    }
    else if (tiger < pathan)
    {
        cout << "Pathan" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }

    return 0;
}