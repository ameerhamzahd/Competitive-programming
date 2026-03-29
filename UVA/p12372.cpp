#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 20, b = 20, c = 20, d, e, f, i, n;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cin >> d >> e >> f;

        if((d <= a) && (e <= b) && (f <= c))
            cout << "Case " << i << ": good\n";
        else
            cout << "Case " << i << ": bad\n";
    }

    return 0;
}
