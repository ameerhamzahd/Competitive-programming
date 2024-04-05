#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, count = 0;
    cin >> n;
    vector <char> v;

    for(i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        v.push_back(s);
    }

    for(j = 0; j < v.size() - 1; j++)
    {
        if(v[j] == v[j + 1])
            count++;
    }

    cout << count << endl;

    return 0;
}
