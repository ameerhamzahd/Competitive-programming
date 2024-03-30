#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    vector<int> v(n);

    for(i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}
