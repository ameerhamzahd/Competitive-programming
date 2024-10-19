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
        if(i == 1)
        {
            cout << "I hate "; 
        }
        else if( i % 2 == 0)
        {
            cout << "that I love ";
        }
        else
        {
            cout << "that I hate ";
        }
    }

    cout << "it" << endl;

    return 0;
}