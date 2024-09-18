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
        int n, temp, ans = 0;
        cin >> n;
        vector<int> v(n + 1);

        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        for(int i = 1; i<= n; i++)
        {
            temp = abs(v[i] - i);

            ans = __gcd(ans, temp);
        }

        cout << ans << endl;
    }

    return 0;
}