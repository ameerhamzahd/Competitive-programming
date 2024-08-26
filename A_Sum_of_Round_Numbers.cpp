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
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        vector<int> v;
        cin >> n;

        if(n % 10 != 0)
        {
            v.push_back(n % 10);
        }

        temp = n % 10;
        n = n - temp;

        if(n % 100 != 0)
        {
            v.push_back(n % 100);
        }

        temp = n % 100;
        n = n - temp;

        if(n % 1000 != 0)
        {
            v.push_back(n % 1000);
        }

        temp = n % 1000;
        n = n - temp;

        if(n % 10000 != 0)
        {
            v.push_back(n % 10000);
        }

        if((n >= 10000) && (n % 10000 == 0))
        {
            v.push_back(n);
        }

        cout << v.size() << endl;

        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
    

    return 0;
}