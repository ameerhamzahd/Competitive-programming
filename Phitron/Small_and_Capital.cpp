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
    int capital = 0, small = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] > 96 && s[i] < 123)
        {
            small++;
        }
        else if(s[i] > 64 && s[i] < 91)
        {
            capital++;
        }
    }

    cout << capital << " " << small << endl;

    return 0;
}