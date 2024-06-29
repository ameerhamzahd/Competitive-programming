/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, temp, temp1, ans;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    temp1 = min(((k * l) / nl), (c * d));
    temp = min(temp1, (p / np));
    ans = temp / n;

    cout << ans << endl;

    return 0;
}