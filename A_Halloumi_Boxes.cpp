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
        int n, k, flag = 0;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (k > 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                cout << "NO" << endl;
                
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}