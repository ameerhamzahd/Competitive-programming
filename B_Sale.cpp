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
    int n, m, sum = 0;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if(m > 0)
        {
            if(v[i] < 0)
            {
                sum = sum + (abs(v[i]));
                m--;
            }
            if(m == 0)
            {
                break;
            }
        }
    }

    cout << sum << endl;

    return 0;
}