#include<bits/stdc++.h>
using namespace std;

int main()
{
    for( ; ; )
    {
        int n;
        cin >> n;

        if(n == 0)
            break;
        else
        {
            int counter1 = 0, counter2 = 0, a[n][n];

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cin >> a[i][j];

                    counter1 = counter1 + a[i][j];
                }

            }
        }
    }



    return 0;
}
