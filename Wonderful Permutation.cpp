#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, n, k, chk, sum = 0;
        cin >> n >> k;
        vector<int> v(n);

        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for(i = 0; i < k; i++)
        {
            if(v[i] > k)
                sum++;
        }

        cout << sum << endl;
    }

    return 0;
}
