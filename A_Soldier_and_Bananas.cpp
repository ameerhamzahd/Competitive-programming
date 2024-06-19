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
    int a, b, c, cost = 0;
    cin >> a >> b >> c;

    for(int i = 1; i <= c; i++)
        cost = cost + (a * i);

    if(cost <= b)
        cout << 0 << endl;
    else
        cout << cost - b << endl;

    return 0;
}