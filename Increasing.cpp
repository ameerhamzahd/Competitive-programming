#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, x, y, z, counter = 0;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        int A[x];

        for(j = 0; j < x; j++)
        {
            cin >> A[j];
        }

        sort(A, A + x);

        if(x == 1)
            cout << "YES" <<endl;
        else if(x > 1)
        {
            for(k = 0; k < (x - 1); k++)
            {
                y = A[k];
                z = A[k + 1];

                if(y < z)
                    counter = 0;

                else
                {
                    counter = 1;
                    break;
                }
            }

            if(counter == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;//35:54.62 04/08/2023 greedy, implementation, sortings 800
}
