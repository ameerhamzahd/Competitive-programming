/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, counter = 0;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 1 && ((b == 1) || (c == 1)))
            counter++;
        else if(b == 1 && ((a == 1) || (c == 1)))
            counter++;
        else if(c == 1 && ((a == 1) || (b == 1)))
            counter++;
    }
    cout << counter << endl;

    return 0;
}