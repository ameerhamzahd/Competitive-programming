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
    int n, count1 = 0, count2 = 0;
    cin >> n;
    vector<string> v;
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        if (v[i] == v[0])
            count1++;
        else
            count2++;
    }
    
    if (count1 > count2)
        cout << v[0] << endl;
    else
        cout << v[n - 1] << endl;

    return 0;
}