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
    int a, b, n, m, temp, ans;
    cin >> n >> m;
    vector<int> v(m);

    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    a = v[0]; 
    b = v[n - 1];
    ans = b - a;
    
    for(int i = n; i <= m; i++)
    {
        temp = abs(v[i - 1] - v[i - n]); 
        ans = min(ans, temp);
    }

    cout << ans << endl;
    
    return 0;
}