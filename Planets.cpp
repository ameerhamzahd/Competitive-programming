#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, c, ans = 0;
        cin >> n >> c;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int m = *max_element(a, a + n);
        int freq[m + 1] = {0};

        for(int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        for (int i = 0; i < (m + 1); i++)
        {
            if (freq[i] >= c)
                ans = ans + c;
            else
            {
                ans = ans + freq[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
