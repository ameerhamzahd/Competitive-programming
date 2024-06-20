/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, ans = 0, temp = 0;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        temp = temp - a + b;

        if(temp > ans)
            ans = temp;
    }

    cout << ans << endl;

    return 0;
}