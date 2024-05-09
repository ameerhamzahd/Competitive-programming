#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, j, n, ans = 0, counter = 0;
        cin >> n;
        vector<int> v(n);

        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int max = v[n - 1];

        for(j = (n - 2); j >= 0 ; j--)
        {
            if(v[j] > max)
            {
                max = v[j];
                counter++;
            }
        }

        cout << counter << endl;
    }

    return 0;
}
