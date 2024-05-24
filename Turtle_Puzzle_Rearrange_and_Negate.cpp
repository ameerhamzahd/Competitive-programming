/*
------------------------------
    السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
        ameerhamzah.d
------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] < 0)
                a[i] = abs(a[i]);
            
            sum = sum + a[i];
        }

        cout << sum << endl;

    }

    return 0;
}