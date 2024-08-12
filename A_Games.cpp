/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, counter = 0;
    cin >> t;
    vector<int> v1(t);
    vector<int> v2(t);

    for (int i = 0; i < t; i++)
    {
        cin >> v1[i] >> v2[i];
    }

    for (int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(v1[i] == v2[j])
            {
                counter++;
            }
        }
    }

    cout << counter << endl;

    return 0;
}