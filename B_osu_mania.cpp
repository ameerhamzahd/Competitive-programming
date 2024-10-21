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
        int n;
        cin >> n;
        vector<int> v;

        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '#')
                {
                    v.push_back(i + 1);
                }
            }
        }

        reverse(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}