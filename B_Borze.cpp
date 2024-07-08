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
    vector<int> v;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 46)
            v.push_back(0);
        else if (s[i] == 45)
        {
            i++;
            if (s[i] == 46)
                v.push_back(1);
            else
                v.push_back(2);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    cout << endl;

    return 0;
}