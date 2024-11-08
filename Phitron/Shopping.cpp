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

    if(n >= 1500)
    {
        cout << "I will buy Punjabi" << endl;
        cout << "I will buy new shoes" << endl;
        cout << "Alisa will buy new shoes" << endl;
    }
    else if(n > 1000)
    {
        cout << "I will buy Punjabi" << endl;
    }
    else
    {
        cout << "Bad luck!" << endl;
    }

    return 0;
}