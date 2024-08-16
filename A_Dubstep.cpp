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
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 87 && s[i + 1] == 85 && s[i + 2] == 66)
        {
            i = i + 2;

            cout << " " << endl;
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}