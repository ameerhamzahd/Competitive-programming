#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    string s, s1;
    cin >> n;
    cin >> s;

    for(i = 0; n > 0; i++)
    {
        if(n % 2 == 1)
            s1 = s1 + s[i];
        else
            s1 = s[i] + s1;

        n--;
    }

    cout << s1 << endl;

    return 0;
}
