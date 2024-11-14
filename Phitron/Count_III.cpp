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
    int counter = 0;
    string s, temp_s;
    cin >> s;

    for(int i = 97; i < 123; i++)
    {
        counter = 0;
        
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == i)
            {
                counter++;
            }
        }

        temp_s = i;

        cout << temp_s << " - " << counter << endl;
    }

    return 0;
}