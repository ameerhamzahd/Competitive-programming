#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, p, cal, price;
    cin >> x >> p;

    cal = 100 - x;
    price = (p * 100) / cal;

    cout << fixed << setprecision(3) << price << endl;

    return 0;
}
