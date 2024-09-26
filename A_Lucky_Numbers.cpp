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
    int t;
    cin >> t;

    while(t--)
    {
        int l, r, temp, luckyNum = 0;
        string num;
        cin >> l >> r;
        int ans = l;

        for(int i = l; i <= r; i++)
        {
            num = to_string(i);
            sort(num.begin(), num.end());
            temp = num[num.length() - 1] - num[0];

            if(temp >= luckyNum)
            {
                luckyNum = temp;
                ans = i;
            }

            if(luckyNum == 9)
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}