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
    int n, counter = 0, ans = INT32_MAX, x, i, j, k;
    cin >> n;
    vector<int> v(n);

    for (i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (j = -1000; j <= 1000; j++)
    {
        x = j;
        counter = 0;

        for (i = 0; i < n; i++)
        {
            k = abs(v[i] - x);
            counter += (k / 7);
            k %= 7;
            counter += (k / 3);
            k %= 3;
            counter += (k / 1);
            k %= 1;
        }

        ans = min(ans, count);
    }
    
    cout << ans << endl;

    return 0;
}