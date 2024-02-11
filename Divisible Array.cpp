#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x, ans = 0;
        cin >> n;
        vector<int> v(n);

        for(int i = 1; i <= n; i++)
        {
            x = i * 2;
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
