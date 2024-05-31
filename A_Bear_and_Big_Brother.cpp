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
    int a, b, counter = 0;
    cin >> a >> b;

    if (a <= b)
    {
        for ( ; ; )
        {
            a = a * 3;
            b = b * 2;
            counter++;

            if(a > b)
                break;
        }
    }

    cout << counter << endl;

    return 0;
}