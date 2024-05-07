#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, n;
    cin >> n;

    for(i = 0; i < n; i++)
    {
        long long j, k, l, x, sum = 0;
        cin >> x;
        vector <long long> v;

        for(j = 0; j < x; j++)
        {
            cin >> k;
            v.push_back(k);

            if(k < 0)
                k = k * -1;

            sum = sum + k;
        }

        long long chk = 0, counter = 0;

        for(l = 0; l < v.size(); l++)
        {
            if((v[l] == 0) && (counter == 0))
                continue;
            else if(v[l] <= 0)
                counter++;
            else
            {
                if(counter > 0)
                    chk++;

                counter = 0;
            }
        }

        if(counter > 0)
            chk++;

        cout << sum << " " << chk << endl;
    }

    return 0;
}
