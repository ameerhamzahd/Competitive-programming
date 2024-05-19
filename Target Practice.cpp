#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, j, n, sum = 0;
        char arr[11][11];

        for(i = 1; i <= 10; i++)
        {
            for(j = 1; j <= 10; j++)
            {
                cin >> arr[i][j];
            }
        }

        for(i = 1; i <= 10; i++)
        {
            for(j = 1; j <= 10; j++)
            {
                if(arr[i][j] == 'X')
                {
                    if(i <= 5)
                    {
                        if(j <= 5)
                            sum = sum + min(i, j);
                        else
                            sum = sum + min(i, 11 - j);
                    }
                    else
                    {
                        if(j <= 5)
                            sum = sum + min(11 - i, j);
                        else
                            sum = sum + min(11 - i, 11 - j);
                    }
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}
