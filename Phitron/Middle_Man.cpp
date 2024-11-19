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
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    if(n % 2 == 0)
    {
        cout << a[(n / 2) - 1] << " " << a[((n / 2) + 1) - 1] << endl;
    }
    else
    {
        cout << a[((n + 1) / 2) - 1] << endl;
    }    

    return 0;
}