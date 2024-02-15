#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, x;
    cin >> n;
    vector <int> v;

    for(i = 0; i < n; i++)
    {
        cin >> x;

        x = x - 1;
        v.push_back(x);

        cout << v[i] << endl;
    }

    return 0;
}
