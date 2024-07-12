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
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, temp1, sum, maximum_sum = 0, temp2 = 0;
        cin >> n;

        for (x = 2; x <= n; x++)
        {
            temp1 = n / x;
            sum = x * ((temp1 * (temp1 + 1)) / 2);
            
            if (sum > maximum_sum)
            {
                maximum_sum = sum;
                temp2 = x;
            }
        }
        
        cout << temp2 << endl;
    }

    return 0;
}