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
    int counter = 1;
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    for(int i = 0; i < (s.size() - 1); i++)
    {
        if(s[i] == s[i + 1])
            continue;
        else
            counter++;
    }

    if(counter % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
    cout << "IGNORE HIM!" << endl;

    return 0;
}