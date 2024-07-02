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
    int h, n, sum = 0;
    cin >> n >> h;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];

        if(h >= v[i])
            sum = sum + 1;
        else
            sum = sum + 2;
    }

    cout << sum << endl;

    return 0;
}