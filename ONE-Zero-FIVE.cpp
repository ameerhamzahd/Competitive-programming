/*
---------------------------------------------
 بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
---------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int divisors = 0;

        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    divisors = divisors + 1;
            }
        }

        if (divisors == 8)
            counter = counter + 1;
    }

    cout << counter << endl;

    return 0;
}