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

    if(n <= 0)
    {
        for(int i = n; i <= 1; i++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}