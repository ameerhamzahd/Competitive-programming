#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maximum = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i] >> p[i];
    }

    for (int t = 0; t < 24; t++)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int t1 = (t - p[i] + 24) % 24;

            if (t1 >= 9 && t1 < 18)
            {
                sum = sum + v[i];
            }
        }

        maximum = max(maximum, sum);
    }

    cout << maximum << endl;

    return 0;
}
