#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H1, M1, H2, M2, x, y, dif, alarm;

    for( ; ; )
    {
        cin >> H1 >> M1 >> H2 >> M2;

        if((H1 == 0) && (M1 == 0) && (H2 == 0) && (M2 == 0))
            break;
        else
        {
            x = (H1 * 60) + M1;
            y = (H2 * 60) + M2;

            if(y < x)
            {
                dif = 1440 - x;
                alarm = dif + y;

                cout << alarm << endl;
            }
            else
            {
                alarm = y - x;

                 cout << alarm << endl;
            }
        }
    }

    return 0;
}

