/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

// Question: 

// Have the function AlphabetSoup(str) take the str string parameter being passed and return
// the string with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers
// and punctuation symbols will not be included in the string.

// Examples

// Input: "coderbyte"
// Output: bcdeeorty

// Input: "hooplah"
// Output: ahhloop


#include<bits/stdc++.h>
using namespace std;

string AlphabetSoup(string s)
{
    sort(s.begin(), s.end());

    return s;
}

int main()
{
    string s;
    cout << "Input: ";
    cin >> s;

    cout << "Output: " << AlphabetSoup(s) << endl;

    return 0;
}