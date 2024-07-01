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
    vector<long long> v;
    string s1, s2, s3;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] != s2[i])
            v.push_back(1);
        else
            v.push_back(0);
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    cout << endl;

    return 0;
}