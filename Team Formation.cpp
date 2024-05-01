#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, teams;
    cin >> n;

    vector<int> v(n);
    vector<int> c, m, p;

    for(i = 0; i < n; i++)
    {
        cin >> v[i];

        if(v[i] == 1)
            c.push_back(i);
        else if(v[i] == 2)
            m.push_back(i);
        else
            p.push_back(i);
    }

    teams = min({c.size(), m.size(), p.size()});
    cout << teams << endl;

    for(i = 0; i < teams; i++)
    {
        cout << c[i] + 1 << " " << m[i] + 1 << " " << p[i] + 1 << endl;
    }

    return 0;
}
