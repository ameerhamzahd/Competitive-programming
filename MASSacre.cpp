/*
---------------------------------------------
 بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
---------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }

    int diff = sum;

    for (int j = 1; j < n; j++)
    {
        int s1 = 0, s2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i < j)
                s1 = s1 + v[i];
            else
                s2 = s2 + v[i];
        }

        diff = min(diff, abs(s1 - s2));
    }

    cout << diff << endl;

    return 0;
}