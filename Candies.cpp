#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, k, l, m, n, x, y, z;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> y;
        vector<int> v;

        for (l = 0; l < y; l++)
        {
            cin >> z;
            v.push_back(z);
        }

        sort(v.begin(), v.end());

        int counter = 0;

        for (k = 0; k < y - 1; k++)
        {
            if (v[k + 1] > v[0])
            {
                m = v[k + 1] - v[0];
                counter = counter + m;
            }
        }

        cout << counter << endl;
    }

    return 0;
}
