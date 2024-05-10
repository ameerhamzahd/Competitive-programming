#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k = 1;
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            k = k + 3;

            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}
