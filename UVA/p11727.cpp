#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000], i, j, n;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> a[j];
        }

          sort(a, a + 3);

          cout << "Case " << i + 1 << ": " << a[1] << endl;
    }

         return 0;
}
