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
        int n;
        long long temp = 0, counter = 0;
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<long long> map;

        for(int i = 0; i < n; i++)
        {
            temp = temp + v[i];
            map.insert(v[i]);

            if(temp % 2 == 0)
            {
                long long x = temp /2;

                if(map.count(x))
                    counter++;
            }
        }

        cout << counter << endl;
    }

    return 0;
}