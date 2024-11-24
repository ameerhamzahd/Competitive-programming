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
    int n, maximum = INT_MIN;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > maximum)
        {
            maximum = a[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        a[i] = maximum - a[i];

        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}