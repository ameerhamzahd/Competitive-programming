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
        int k, n, maximum;
        cin >> n;
        vector<int> v1(n);
        vector<int> v2;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        for (int i = 0; i < (n - 1); i++)
        {
            maximum = max(v1[i], v1[i + 1]);

            v2.push_back(maximum);
        }
        sort(v2.begin(), v2.end());

        cout << v2[0] - 1 << endl;
    }

    return 0;
}