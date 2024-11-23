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
    int capital = 0, small = 0, space = 0;
    string s;
    getline(cin , s);

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] > 96 && s[i] < 123)
        {
            small++;
        }
        else if(s[i] > 64 && s[i] < 91)
        {
            capital++;
        }
        else if(s[i] == 32)
        {
            space++;
        }
    }

    cout << "Capital - " << capital << endl;
    cout << "Small - " << small << endl;
    cout << "Spaces - " << space << endl;
    

    return 0;
}