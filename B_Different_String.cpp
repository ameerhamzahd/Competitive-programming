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
        string s;
        cin >> s;
        int flag = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                swap(s[i], s[i + 1]);
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}