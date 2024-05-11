#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int x;
    cin >> n;

    x = n;

    if((x % 10) == 9)
        cout << "GOTO Vasilisa." << endl;
    else
    {
        n = n * 10;
        x = n;

        if((x % 10) >= 5)
            cout << ceil(n) << endl;
        else
            cout << floor(n) << endl;
    }

    return 0;
}
