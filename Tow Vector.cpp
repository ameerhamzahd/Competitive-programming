#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t;
    cin >> t;

    for (i = 0; i < t; i++)
    {
        int a, b, j, n, flag = 0;
        cin >> n;
        vector<int> A(n);
        vector<int> B(n);

        for (j = 0; j < n; j++)
        {
            cin >> a;
            A[j] = a;
        }
        sort(A.begin(), A.end());

        for (j = 0; j < n; j++)
        {
            cin >> b;
            B[j] = b;
        }
        sort(B.begin(), B.end());

        for (j = 0; j < n; j++)
        {
            if ((B[j] - A[j] != 0) && (B[j] - A[j] != 1))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
