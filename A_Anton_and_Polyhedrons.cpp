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
    while(t--)
    {
        string s;
        cin >> s;

        if(s == "Tetrahedron")
        {
            counter = counter + 4;
        }
        else if(s == "Cube")
        {
            counter = counter + 6;
        }
        else if(s == "Octahedron")
        {
            counter = counter + 8;
        }
        else if(s == "Dodecahedron")
        {
            counter = counter + 12;
        }
        else if(s == "Icosahedron")
        {
            counter = counter + 20;
        }
    }

    cout << counter << endl;

    return 0;
}