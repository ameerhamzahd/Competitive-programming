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
    int n, temp;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    v2 = v1;
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v2[i] == v1[j])
                cout << j + 1 << " ";
        }
    }

    return 0;
}