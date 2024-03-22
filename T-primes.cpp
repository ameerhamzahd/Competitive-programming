#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        long long x, div = 0;
        cin >> x;

        for (long long j = 1; (j * j) <= x; j++)
        {
            if (x % j == 0)
            {
                div++;

                if (div > 2)
                {
                    break;
                }
                if (j != (x / j))
                {
                    div++;
                }
            }
        }

        if (div == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
