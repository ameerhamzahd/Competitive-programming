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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int max_element = max(a[0] - 0, 2 * (x - a[n - 1]));

        for (int j = 1; j < n; j++)
        {
            max_element = max(max_element, a[j] - a[j - 1]);
        }

        cout << max_element << endl;
    }

    return 0;
}