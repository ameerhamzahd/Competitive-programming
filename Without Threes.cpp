#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, x = 1000;
    cin >> n;
    vector <int> v;

    for(j = 1; j <= 1666; j++)
    {
        if(j % 3 == 0 || j % 10 == 3)
            continue;
        else
            v.push_back(j);
    }

    for(i = 0; i < n; i++)
    {
        cin >> k;

        cout << v[k - 1] << endl;
    }

    return 0;
}
