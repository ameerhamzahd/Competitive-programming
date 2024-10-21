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
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 0, temp = 0, ans = -100000;
        cin >> n;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        for (long long i = 0; i < (n - 1); i++)
        {
            temp = sum;

            temp += -v[i];
            temp += -v[i + 1];

            temp -= v[i];
            temp -= v[i + 1];

            if(temp > ans)
            {
                ans = temp;
            }
        }

        cout << ans << endl;
    }

    return 0;
}