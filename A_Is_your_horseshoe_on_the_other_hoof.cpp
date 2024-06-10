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
    int n = 4, counter = 0;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for(int i = 0; i < (n - 1); i++)
    {
        if(v[i] != v[i + 1])
            counter++;
    }

    cout << n - counter - 1<< endl;

    return 0;
}