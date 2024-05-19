/*
---------------------------------------------
 بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
---------------------------------------------
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
        vector<int> v(n);
        int y = 1;

        for (int i = 0; i < n; i++)
        {
            v[i] = y;

            if (i < x)
                y++;
            else if (i >= x && y < n)
                y++;
        }

        reverse(v.begin() + x, v.end());

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}