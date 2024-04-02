#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, j, n, ans = 0, counter = 0;
        cin >> n;
        vector<char> v(n);

        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for(j = 0; j < (n - 1); j++)
        {
            if(v[j] == v[j + 1])
                counter++;
            else
                counter = 0;

            ans = max(ans, counter);
        }

        cout  << ans + 2 << endl;
    }

    return 0;
}
