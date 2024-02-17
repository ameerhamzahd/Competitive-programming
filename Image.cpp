#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int counter = 1;
        string s1, s2;
        cin >> s1 >> s2;

        if(s1[0] != s1[1])
            counter++;
        if((s1[1] != s2[0]) && (s1[0] != s2[0]))
            counter++;
        if((s1[0] != s2[1]) && (s1[1] != s2[1]) && (s2[0] != s2[1]))
            counter++;

        cout << counter - 1 << endl;
    }

    return 0;
}
