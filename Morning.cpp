#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        int n, k;
        cin >> n >> k;
        cin >> s;

        if(n < k)
        {
            cout<<"NO"<<endl;
            continue;
        }

        long long counter =0;
        map<char,long long> mp;

        for(auto x : s)
        mp[x]++;

        for(auto [x, y] : mp)
            counter = counter + (y % 2);

        counter--;

        if(k < counter)
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }

    return 0;
}
