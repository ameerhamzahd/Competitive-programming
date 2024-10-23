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
        int flag = 0;
        string s, s1, s2;
        cin >> s;

        for (int i = 1; i < s.size(); ++i)
        {
            s1 = s.substr(0, i);
            s2 = s.substr(i);

            if (s2[0] != '0' && stoi(s1) < stoi(s2))
            {
                cout << s1 << " " << s2 << endl;

                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}