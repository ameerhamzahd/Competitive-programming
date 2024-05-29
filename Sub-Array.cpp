#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, t;
    cin >> T;
    for(t = 1; t <= T; t++)
    {
        long long n, i, j, streak = 0, counter = 0;
        cin>>n;
        vector<long long> A(n);

        for(i = 0; i < n; i++)
        {
            cin>>A[i];
        }

        for(i = 0; i < n; i++)
        {
            j = i;

            while(j < n && A[i] == A[j])
            {
                j++;
            }

            streak = j - i;
            counter = counter + (streak * (streak + 1)) / 2;
            i = j - 1;
        }
        cout << "Case " << t << ": " << n * (n + 1) / 2 - counter << endl;
    }

    return 0;
}
