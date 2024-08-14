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
    int n, counter, temp;
    cin >> n;
    
    counter = n / 100;
    temp = n % 100;

    counter = counter + (temp / 20);
    temp = temp % 20;

    counter = counter + (temp / 10);
    temp = temp % 10;

    counter = counter + (temp / 5);
    temp = temp % 5;

    counter = counter + (temp / 1);
    temp = temp % 1;

    cout << counter << endl;

    return 0;
}