/*
---------------------------------------------
 بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
---------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count1 = 0, count2 = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                count1 = count1 + i;
                break;
            }
        }

        for (int i = n; i > 0; i--)
        {
            if (s[i] == 'B')
            {
                count2 = count2 + i;
                break;
            }
        }
        
        cout << count2 - count1 + 1 << endl;
    }

    return 0;
}