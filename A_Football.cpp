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
    int counter = 0, flag = 0;
    string s;
    cin >> s;

    for(int i = 0; i < (s.size() - 1); i++)
    {
        if(s[i] == s[i + 1])
        {
            counter++;

            if(counter == 6)
            {
                flag = 1;
                break;
            }
        }
        else
        {
            counter = 0;
        }
    }

    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}