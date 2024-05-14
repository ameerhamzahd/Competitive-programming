#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, chk = 1;
        cin >> n >> k;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(v[i] == k)
            {
                cout << "YES" << endl;
                chk = 0;
                break;
            }
        }
            if(chk == 1)
                cout << "NO" << endl;
    }

    return 0;
}
