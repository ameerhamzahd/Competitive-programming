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
    int flag = 0;
    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0, j = (s2.size() - 1); i < s1.size(), j >= 0; i++, j--)
    {
        if(s1[i] != s2[j])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}