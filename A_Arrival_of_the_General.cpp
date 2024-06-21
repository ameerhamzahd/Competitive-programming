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
    int n, counter = 0, maximum = 0, minimum = 101, pos_max, pos_min;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (minimum >= v[i])
        {
            minimum = v[i];
            pos_min = i;
        }

        if (maximum < v[i])
        {
            maximum = v[i];
            pos_max = i;
        }
    }

    if(pos_max > pos_min)
    {
        pos_min++;
    }

    cout << pos_max + (n - 1) - pos_min << endl;

    return 0;
}