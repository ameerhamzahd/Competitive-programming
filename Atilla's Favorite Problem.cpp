#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, n, maximum;
        string sn;
        cin >> n;
        cin >> sn;

        sort(sn.begin(), sn.end());
        maximum = sn[sn.size() - 1] - 'a' + 1;

        cout << maximum << endl;
    }

    return 0;
}
