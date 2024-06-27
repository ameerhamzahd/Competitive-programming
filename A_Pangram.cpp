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
    int n, counter = 0;
    string s;
    cin >> n;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != s[i + 1])
            counter++;
    }

    if(counter == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}