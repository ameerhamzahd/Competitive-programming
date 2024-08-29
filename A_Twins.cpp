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
    int n, sum1 = 0, sum2 = 0, counter = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        sum1 = sum1 + v[i];
    }

    sum1 = sum1 / 2;

    sort(v.begin(), v.end());

    for (int i = (v.size() - 1); i >= 0; i--)
    {
        sum2 = sum2 + v[i];
        counter++;

        if (sum1 < sum2)
        {
            break;
        }
    }

    cout << counter << endl;

    return 0;
}