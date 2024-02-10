#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    vector<char> v(n);

    for(i = 0; i < n; i++)
    {
        cin >> v[i];

        if(v[i] == 'c'|| v[i] == 'o'|| v[i] == 'd' || v[i] == 'e'|| v[i] == 'f'|| v[i] == 'r'|| v[i] == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
