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

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= (n - 1); j++)
        {
            cout << " ";
        }
        for(int k = i; k >= 1; k--)
        {
            cout << k;
        } 

        cout << endl;
    }

    return 0;
}