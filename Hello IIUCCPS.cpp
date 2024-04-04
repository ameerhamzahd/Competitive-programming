#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, counter = 0;
    string p;
    cin >> p;

    for(i = 0; i < p.size(); i++)
    {
        if(p[i] == 'H'|| p[i] == 'Q'|| p[i] == '9')
        {
            counter = 1;
            break;
        }
        else
        {
            counter = 0;
        }
    }

    if(counter == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
