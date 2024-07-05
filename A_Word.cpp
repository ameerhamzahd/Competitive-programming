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
    int cap, counter = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 97)
            counter++;
    }
    cap = s.size() - counter;

    if(cap < counter)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] < 97)
                s[i] = tolower(s[i]);
        }

        cout << s << endl;
    }

    else if(cap > counter)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] > 90)
                s[i] = toupper(s[i]);
        }

        cout << s << endl;
    }

    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] < 97)
                s[i] = tolower(s[i]);
        }

        cout << s << endl;
    }

    return 0;
}