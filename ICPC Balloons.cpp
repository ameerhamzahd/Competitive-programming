#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, sum = 2;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());

        for(int i = 0; i < (n - 1); i++)
        {
            if(s[i] != s[i + 1])
                sum = sum + 2;
            else
                sum = sum + 1;
        }

        cout << sum << endl;
    }

    return 0;
}
