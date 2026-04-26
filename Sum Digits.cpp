#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, x, sum = 0;
    cin >> n;
    string A;
    cin >> A;

    for(i = 0; i < n; i++)
    {
        x = A[i] - '0';
        sum = sum + x;
    }

    cout << sum << endl;

    return 0;
}
