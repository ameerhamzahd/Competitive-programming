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
        long long ans = 1;
        string s;
        cin >> s;

        if(s[0] == '0')
        {
            cout << 0 << endl;
        }
        else
        {
            if(s[0] == '?')
            {
                ans *= 9;
            }

            for(long long i = 1; i < s.size(); i++)
            {
                if(s[i] == '?') 
                {
                    ans *= 10;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}