#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d, l, x, w, z;
    cin >> w >> d >> l;

    x = (w * 100) + (d * 10) + l;

    if(x % 4 == 0)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

    return 0;
}
