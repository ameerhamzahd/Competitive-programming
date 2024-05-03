#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, move = 0;
    vector < vector <int> > mat(5, vector <int> (5, 0));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> mat[i][j];

            if (mat[i][j] == 1)
                move = abs(2 - i) + abs(2 - j);
        }
    }

    cout << move << endl;

    return 0;
}
