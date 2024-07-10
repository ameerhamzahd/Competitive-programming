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
    double n;
    double sum = 0;
    cin >> n;
    vector<long long> v(n);


    for(int i = 0; i < n; i++)
    {
        cin >> v[i];

        sum = sum + v[i];
    }

    cout << setprecision(14) << sum / n << endl;

    return 0;
}
