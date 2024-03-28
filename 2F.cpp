#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int left = 0, right = n - 1, person = -1;
        long long t;
        cin >> t;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (a[mid] <= t)
            {
                person = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }

        if (person == -1)
        {
            cout << t * n << " ";
        }
        else
        {
            long long problems_tested = a[person] + t - a[person] + 1;
            problems_tested += (n - person - 1) * t;
            cout << problems_tested << " ";
        }
    }

    cout << endl;

    return 0;
}
