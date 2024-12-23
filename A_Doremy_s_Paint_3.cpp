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
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<long, long> freq;

        for (long long i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        if (freq.size() > 2)
        {
            cout << "No" << '\n';
        }
        else if (freq.size() == 1)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            vector<long long> ans;
            
            for (auto i : freq)
            {
                ans.push_back(i.second);
            }

            if (abs(ans[0] - ans[1]) <= 1)
            {
                cout << "Yes" << '\n';
            }
            else
            {
                cout << "No" << '\n';
            }
        }
    }

    return 0;
}