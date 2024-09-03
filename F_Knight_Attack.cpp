/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char c[3][3];

        bool flag = false

            for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> c[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (c[i][j] == 'h')
                {
                    if (i == 0)
                    {
                        if (j == 0 && (c[1][2] == 'h' || c[2][1] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if (j == 1 && (c[2][0] == 'h' || c[2][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if (j == 2 && (c[1][0] == 'h' || c[2][1] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (i == 1)
                    {
                        if (j == 0 && (c[0][2] == 'h' || c[2][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if (j == 1)
                        {
                            flag = 0;
                        }
                        if (j == 2 && (c[0][0] == 'h' || c[2][0] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (i == 2)
                    {
                        if (j == 0 && (c[0][1] == 'h' || c[1][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if (j == 1 && (c[0][0] == 'h' || c[0][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if (j == 2 && (c[1][0] == 'h' || c[0][1] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }

        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}