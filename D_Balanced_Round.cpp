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
    while(t--)
    {
        int n, k, counter = 0, temp = 0;
        cin >> n >> k;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i]; 
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++)
        {
            counter++;

            if(((v[i + 1] - v[i]) > k) || (i == n - 1))
            {
                temp = max(temp, counter);
                counter = 0;
            }
        }

        cout << n - temp << endl;

    }

    return 0;
}