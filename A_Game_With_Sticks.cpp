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
    int n, m, counter = 0;
    cin >> n >> m;

    for (int i = 1; ; )
    {
        if ((n - i == 0) || (m - i == 0))
        {
            break;
        }

        i++;
        counter++;
    }

    if (counter % 2 == 0)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }

    return 0;
}