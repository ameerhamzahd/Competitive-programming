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
    while (t--)
    {
        long long n, counter = 0, flag = 0;
        string s;
        cin >> n;
        cin >> s;
 
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '.')
            {
                counter++;
            }
            if(i <= n - 3 && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                flag = 1;
            }
        }
 
        if (flag == 1)
        {
            cout << "2" <<endl;
        }
        else
        {
            cout << counter <<endl;
        }
    }

    return 0;
}