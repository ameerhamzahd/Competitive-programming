#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, counter = 0;
    cin >> t;
    vector<int> v(t);

    for(i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(i = 0; i < (t - 1); i++)
    {
        if(v[i] > v[0] && v[i] < v[t - 1])
            counter++;
    }

    cout << counter << endl;

    return 0;
}
