#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, i, j, k, l, n, q, r, t, sum;
    cin >> t;

    while(t--)
    {
        cin >> n >> q;
        vector <long long> v;

        for(j = 0; j < n; j++)
        {
            cin >> a;
            v.push_back(a);
        }

        vector <long long> pre_v(n, 0);
        pre_v[0] = v[0];

        for(i = 1; i < n; i++)
        {
            pre_v[i] = pre_v[i - 1] + v[i];
        }

        while(q--)
        {
            cin >> l >> r >> k;
            l--;
            r--;
            sum = pre_v[n - 1];
            sum = sum - pre_v[r];

            if(l > 0)
                sum = sum - pre_v[l - 1];

            sum = sum +((r - l + 1) * k);

            if(sum % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
