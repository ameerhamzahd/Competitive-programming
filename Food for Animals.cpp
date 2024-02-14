#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (x + y <= a + b + c)
        {
            if (x <= a + c)
            {
                if (y <= b + c)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
