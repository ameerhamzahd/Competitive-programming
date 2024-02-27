#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        int j, k, x, ans = -1;
        cin >> x;
        int A[x];

        for(j = 0; j < x; j++)
        {
            cin >> A[j];
        }

        sort(A, A + x);

        for(k = 0; k < (x - 2); k++)
        {
            if((A[k] == A[k + 1]) && (A[k + 1] == A[k + 2]))
            {
                ans = A[k];
                break;
            }
            else
                ans = -1;
        }

        cout << ans << endl;
    }

    return 0;
}//48:07.69 04/08/2023 implementation, sortings 800
