#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, i, n, fixed_tax = 2000;
    double tax, c, b;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> a;

        if((a >= 0) && (a <= 180000))
        {
            tax = 0;

            cout << "Case " << i + 1 << ": " << (long long)ceil(tax) << endl;
        }
        else if((a > 180000) && (a <= 480000))
        {
            b = a - 180000;
            tax = b * 0.10;

            if(tax < fixed_tax)
                cout << "Case " << i + 1 << ": " << fixed_tax << endl;
            else
                cout << "Case " << i + 1 << ": " << (long long)ceil(tax) << endl;
        }
        else if((a > 480000) && (a <= 880000))
        {
            b = a - 480000;
            c = b * 0.15;
            tax = c + 30000;

            cout << "Case " << i + 1 << ": " << (long long)ceil(tax) << endl;
        }
        else if((a > 880000) && (a <= 1180000))
        {
            b = a - 880000;
            c = b * 0.20;
            tax = c + 90000;

            cout << "Case " << i + 1 << ": " << (long long)ceil(tax) << endl;
        }
        else if(a > 1180000)
        {
            b = a - 1180000;
            c = b * 0.25;
            tax = c + 150000;

            cout << "Case " << i + 1 << ": " << (long long)ceil(tax) << endl;
        }
    }

    return 0;
}
