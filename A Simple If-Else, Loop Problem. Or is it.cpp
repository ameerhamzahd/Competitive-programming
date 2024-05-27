#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int a, b, n, pai, counter = 0;
        cin >> n;
        cin >> a >> b;
        vector<int> p(n);

        for(int j = 0; j < n; j++)
        {
            cin >> p[j];
        }

        for(int j = 0; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                pai = p[j] + p[k];

                if((a <= pai) && (pai <= b))
                    counter++;
            }
        }

        cout << "Case " << i + 1 << ": " << counter << endl;
    }

    return 0;
}
