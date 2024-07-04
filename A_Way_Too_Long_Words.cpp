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
    int t;
    cin >> t;

    while(t--)
    {
        int counter = 0;
        string s;
        cin >> s;

        if(s.size() <= 10)
            cout << s << endl;
        else
        {
            for (int i = 1; i < (s.size() - 1); i++)
                counter++;
            
            cout << s[0] << counter << s[s.size() - 1] << endl;
        }
    }

    return 0;
}