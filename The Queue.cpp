#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, t;
    cin >> n >> t;
    vector <char> v;

    for(i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        v.push_back(s);
    }

    while(t--)
    {
        for(j = 0; j <= (n - 1); j++)
        {
            if(v[j] == 'B' && v[j + 1] == 'G')
            {
                swap(v[j + 1], v[j]);
                j++;
            }
        }
    }

    for(k = 0; k <v.size(); k++)
    {
        cout << v[k];
    }

    cout << endl;

    return 0;
}
