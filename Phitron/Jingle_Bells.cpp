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
    int n;
    cin >> n;

    int r = 5 + (n + 1) / 2;

    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j < r; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int x = ((2 * r) - n) / 2;

    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << " ";
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}