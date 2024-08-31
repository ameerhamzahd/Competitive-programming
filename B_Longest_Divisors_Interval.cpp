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
        long long n, ans;
        cin >> n;
        vector<long long> v;

        for (long long i = 1;; i++)
        {
            if (n % i != 0)
            {
                ans = i - 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}