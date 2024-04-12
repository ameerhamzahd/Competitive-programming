#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, x;
    cin >> x;

    for(i = 0; i < x; i++)
    {
        long long a, j, k, l, m = 0, n, sum = 0;
        vector <long long> v;
        cin >> n >> k;
        long long div = n / 2;

        for(j = 0; j < (n * k); j++)
        {
            cin >> a;
            v.push_back(a);
        }

        for(l = (n * k) - div - 1; l >= 0; l = l - div - 1)
        {
            sum = sum + v[l];
            m++;

            if(m == k)
                break;
        }

        cout << sum << endl;
    }

    return 0;
}
