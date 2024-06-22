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
    int counter = 0;
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == ',' || s[i] == ' ' || s[i] == '}')
            continue;
        else
        {
            if (s[i] != s[i + 1])
                counter++;
        }
    }

    cout << counter << endl;

    return 0;
}