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
    int n, a, b, c, sum;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> sum >> a >> b >> c;

        cout << sum - a - b - c << endl;
    }

    return 0;
}