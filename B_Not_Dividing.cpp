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
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

            if(v[i] == 1)
            {
                v[i] = v[i] + 1;
            }
        }

        for(int i = 0; i < (n - 1); i++)
        {
            if(v[i + 1] % v[i] == 0)
            {
                v[i + 1]++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}