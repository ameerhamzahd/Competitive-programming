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

void odd_even()
{
    int n;
    cin >> n;
    int a[n];

    int odd = 0, even = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << even << " " << odd << endl;
}

int main()
{
    odd_even();

    return 0;
}