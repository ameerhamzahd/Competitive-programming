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
        int sum = 0, x, flag = 0;
        string s1 = s;
        sort(s1.begin(), s1.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s1[i])
                flag = 1;
        }

        if (flag == 0)
            cout << 1 << endl;

        else
        {
            for (int i = 0; i < (s.size() - 1); i++)
            {
                x = s[i] ^ s[i + 1];
                sum = sum + x;
            }

            if (sum < 2)
                cout << sum + 1 << endl;
            else
                cout << sum << endl;
        }
    }

    return 0;
}