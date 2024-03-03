#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, s, n, flag;
    cin >> s >> n;
    vector<pair<int, int>> v;

    for(i = 0; i < n; i++)
    {
        int x, y;
        flag = 0;
        cin >> x >> y;
        v.push_back(make_pair(x , y));
    }

    sort(v.begin(), v.end());

    for(j = 0; j < n; j++)
    {
        if(s > v[j]. first)
            s = s + v[j]. second;
        else
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
