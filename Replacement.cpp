#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;

    int A[n];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];

        if(A[i] > 0)
        {
            A[i] = 1;
        }
        else if(A[i] < 0)
        {
            A[i] = 2;
        }

        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}
