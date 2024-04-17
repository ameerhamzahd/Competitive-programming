#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i;
    string s;
    cin >> s;
    vector <int> v;

    for(i = 0; i < s.size(); i++)
    {
        if(s[i]=='+')
            continue;
        else
            v.push_back(s[i] - '0');
    }

    sort(v.begin(),v.end());

    cout << v[0];

    for(i = 1; i < v.size(); i++)
    {
        cout << "+" << v[i];
    }
    cout<<endl;

    return 0;
}
