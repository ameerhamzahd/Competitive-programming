#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x = 0, y = 0, chk = 0;
        cin >> n;
        string s1;
        cin >> s1;

        for(int i = 0; i < n; i++)
        {
            if(s1[i] == 'U')
            {
                y++;
            }
            else if(s1[i] == 'R')
            {
                x++;
            }
            else if(s1[i] == 'D')
            {
                y--;
            }
            else if(s1[i] == 'L')
            {
                x--;
            }

            if(x == 1 && y == 1)
            {
                chk = 1;
                break;
            }
        }

        if(chk == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
