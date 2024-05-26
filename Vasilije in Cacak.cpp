#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long k, n, x, minimum, maximum;
        cin >> n >> k >> x;

        minimum = (k * (k + 1)) / 2;
        maximum = (n * k - (k * (k - 1)) / 2);

        if(x >= minimum && x <= maximum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
