#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x, ans = 0;
        string s;
        cin >> n >> x >> s;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                ans++;
                i = i + x - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
