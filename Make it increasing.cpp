#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long f = 1, i, n, x, chk = 0;
        cin >> n;
        vector <long long> v;

        for(i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        for(i = 0; i < n; i++)
        {
            if(v[i] >= i)
                chk = chk + (v[i] - i);
            else if(v[i] + chk >= i)
                chk = chk - (i - v[i]);
            else
            {
                f = 0;

                cout << "NO" << endl;
                break;
            }
        }

        if(f == 1)
            cout << "YES" << endl;
    }

    return 0;
}
