#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, count_num = 0, minimum = 1e9;
    cin >> n;
    int A[n];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];

        if(A[i] < minimum)
        {
            minimum = A[i];
        }
    }

    for(j = 0; j < n; j++)
    {
        if(A[j] == minimum)
        {
            count_num++;
        }
    }

    if(count_num % 2 == 0)
        cout << "Unlucky" << endl;
    else
        cout << "Lucky" << endl;


    return 0;
}
