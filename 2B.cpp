#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        long long sum = 0, counter = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum = sum + v[i];
        }

        long long avg = sum / n;

        for (int i = 0; i < n; i++)
        {
            if(v[i] > avg)
                counter = counter + (v[i] - avg);
        }

        cout << counter << endl;
    }

    return 0;
}
