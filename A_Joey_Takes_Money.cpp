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
    long long t;
    cin >> t;
 
    while(t--)
    {
        long long n, ans = 1;
        cin >> n;
        vector<long long> v(n);
 
        for(long long i = 0; i < n; i++)
        {
            cin >> v[i];
 
            ans = ans * v[i]; 
        }
        
        ans = 2022 * (ans + (n - 1));
        cout << ans << endl;
    }
 
    return 0;
}