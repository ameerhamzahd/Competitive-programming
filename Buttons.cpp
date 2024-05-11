#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y, z;
    cin>>t;

    while(t--)
    {
        cin >> x >> y >> z;

        if((x == y) && (z % 2 != 0))
            cout<<"First"<<endl;
        else if((x == y) && (z % 2 == 0))
            cout<<"Second"<<endl;
        else if(x > y)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }

    return 0;
}
