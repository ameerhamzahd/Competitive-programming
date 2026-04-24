#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, l, n;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        int  x, minimum = 1e9, sum = 0;
        cin >> x;
        int A[x];

        for(j = 0; j < x; j++)
        {
            cin >> A[j];
        }

        for(k = 0; k < x; k++)
        {
            for(l = (k + 1); l < x; l++)
            {
                sum = A[k] + A[l] + l - k;

                if(sum < minimum)
                {
                    minimum = sum;
                }
            }
        }

        cout << minimum << endl;
    }

    return 0;
}
