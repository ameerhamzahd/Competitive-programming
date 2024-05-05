#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, x, y;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        vector <int> v;
        cin >> x;

        for(j = 0; j < x; j++)
        {
            cin >> y;
            v.push_back(y);
        }

        for(j = 0; j < v.size(); j++)
        {
            v[j] = v.size() + 1 - v[j];

            cout << v[j] << " ";
        }

        cout << endl;
    }

    return 0;
}

