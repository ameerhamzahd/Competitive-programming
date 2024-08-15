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
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        string s1, s2 = "";
        cin >> n;
        cin >> s1;

        for (int i = 0; i < s1.size(); i++)
        {
            s1[i] = tolower(s1[i]);
        }

        if(s1[0] == 'm')
        {
            s2 = s2 + 'm';
        }
        else
        {
            s2 = s2 + s1[0];
        }

        for(int i = 1; i < n; i++)
        {
            if(s1[i] != s1[i - 1])
            {
                s2 = s2 + s1[i];
            }
        }

        if(s2 == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
