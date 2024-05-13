#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, mul = 1;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int x = *min_element(a, a + n);

        a[0] = x + 1;

        for(int i = 0; i < n; i++)
        {
            mul = mul * a[i];
        }

        cout << mul << endl;
    }

    return 0;
}
