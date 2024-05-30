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
    int n, counterA = 0, counterD = 0;
    string s;
    cin >> n;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
            counterA++;
        else
            counterD++;
    }

    if(counterA > counterD)
        cout << "Anton" << endl;
    else if(counterA < counterD)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    
    return 0;
}