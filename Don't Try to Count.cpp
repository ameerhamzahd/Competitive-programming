#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s1, s2;
        int n, m, counter = 0;
        cin >> n >> m;
        cin >> s1 >> s2;

        while(1)
        {
            size_t f = s1.find(s2);

            if(f != string :: npos)
                break;
            if(s1.size() > (n * m))
            {
                counter = -1;
                break;
            }

            s1= s1 + s1;
            counter++;
        }

        cout << counter << endl;
    }

    return 0;
}
