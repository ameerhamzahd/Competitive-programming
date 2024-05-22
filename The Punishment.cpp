#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    for(int i = 1; sum < n; i++)
    {
        sum = sum + i;
    }

    if (sum == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
