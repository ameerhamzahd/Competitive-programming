#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int rat;
        cin >> rat;

        if(rat >= 1900)
            cout << "Division 1" << endl;
        else if(rat >= 1600 && rat <= 1899)
            cout << "Division 2" << endl;
        else if(rat >= 1400 && rat <= 1599)
            cout << "Division 3" << endl;
        else if(rat <= 1399)
            cout << "Division 4" << endl;
    }

    return 0;
}
