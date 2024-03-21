#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, m, n, counter = 1;
    long long sum = 0;
    cin >> n >> m;
    vector<int> v(m);

    for(j = 0; j < m; j++)
    {
        cin >> v[j];
    }

    sum = sum + v[0] - 1;

    for(i = 1; i < m; i++)
    {
        if(v[i - 1] > v[i])
            sum = sum + n - v[i - 1] + v[i];
        else
            sum = sum + v[i] - v[i - 1];
    }

    cout << sum << endl;

    return 0;
}
