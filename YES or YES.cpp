#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int chk = 0;
        string s;
        cin >> s;

        for(int i = 0; i < 1; i++)
        {
            if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
                chk = 0;
            else
            {
                chk = 1;
                break;
            }
        }

        if(chk == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
