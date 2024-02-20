#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, flag = 1;
        string A;
        cin >> A;

        for(i = 0; i < ((A.size() / 2) - 1); i++)
        {
            if(A[i] != A[i + 1])
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << "NO" << endl;
    }

    return 0;
}
