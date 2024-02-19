#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int counter = 0;
        vector <int> v(4);

        for(int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }

        for(int i = 1; i < 4; i++)
        {
            if(v[0] < v[i])
                counter++;
        }

        cout << counter << endl;
    }

    return 0;
}
