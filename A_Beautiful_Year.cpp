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
    int a, b, c, d, n, temp1, temp2;
    cin >> n;
    temp1 = n + 1;

    for ( ; ; )
    {
        temp2 = temp1;

        d = temp2 % 10;
        temp2 = temp2 / 10;
        c = temp2 % 10;
        temp2 = temp2 / 10;
        b = temp2 % 10;
        temp2 = temp2 / 10;
        a = temp2 % 10;

        if((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d))
        temp1++;
        else
        break;
    }

    cout << temp1 <<  endl;

    return 0;
}