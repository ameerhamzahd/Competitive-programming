#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, j, n, t, counter;
    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<long long> A(n);
        a = 1, b;

        for(i = 0; i < n; i++)
            cin >> A[i];

        sort(A.begin(), A.end());
        counter = 1;

        if(A[0] == A[n - 1])
            cout << -1 << endl;
        else
        {
            for(i = 1; i < n; i++)
            {
                if(A[0] % A[i] == 0)
                {
                    a = 0;
                    counter++;
                    b = i;
                }
            }
            if(a == 0)
            {
                cout << counter << " " << n - counter << endl;

                for(i = 0; i < counter; i++)
                    cout << A[i] << " ";

                cout << endl;

                for(i = counter; i < n; i++)
                    cout << A[i] << " ";

                cout << endl;
            }
            else
            {
                cout << 1 << " " << n - 1 << endl;
                cout << A[0] << endl;

                for(i = 1; i < n; i++)
                    cout << A[i] << " ";

                cout << endl;
            }
        }
    }

    return 0;
}
