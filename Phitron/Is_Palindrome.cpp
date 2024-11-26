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

int is_palindrome(string s)
{
    for (int i = 0; i < (s.size() / 2); i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    string s;
    cin >> s;

    int result = is_palindrome(s);

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}