#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, n, chk = 0;
        cin >> n;
        vector<int> v(n);

        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for(i = 0; i < (n - 1); i++)
        {
            if(v[i] < v[i + 1])
                chk = 0;
            else
            {
                chk = 1;
                break;
            }
        }

        if(chk == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
