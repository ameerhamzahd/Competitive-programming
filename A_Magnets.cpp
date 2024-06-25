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
    int t, counter = 1;
    cin >> t;
    vector<int> v(t);

    for(int i = 0; i < t; i++)
    {
        cin >> v[i]; 
    }

    for(int i = 0; i < (t - 1); i++)
    {
        if(v[i] != v[i + 1])
        {
            counter++;
        } 
    }

    cout << counter << endl;

    return 0;
}
