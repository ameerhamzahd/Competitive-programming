/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

// Question:

// Have the function ArithGeo(arr) take the array of numbers stored in arr and return the string
// "Arithmetic" if the sequence follows an arithmetic pattern or return "Geometric" if it
// follows a geometric pattern. If the sequence doesn't follow either pattern return -1. An
// arithmetic sequence is one where the difference between each of the numbers is consistent,
// whereas in a geometric sequence, each term after the first is multiplied by some constant
// or common ratio. Arithmetic example: [2, 4, 6, 8] and Geometric example: [2, 6, 18, 54].
// Negative numbers may be entered as parameters, 0 will not be entered, and no array will
// contain all the same elements.

// Examples

// Input: [5,10,15]
// Output: Arithmetic

// Input: [2,4,16,24]
// Output: -1
 

#include <bits/stdc++.h>
using namespace std;

string ArithGeo(vector<int> arr)
{
    if (arr.size() < 2)
    {
        return "-1";
    }

    int arithmeticDiff = arr[1] - arr[0];
    bool isArithmetic = true;

    double geometricRatio = static_cast<double>(arr[1]) / arr[0];
    bool isGeometric = true;

    for (size_t i = 1; i < arr.size(); ++i)
    {
        if (arr[i] - arr[i - 1] != arithmeticDiff)
        {
            isArithmetic = false;
        }
        if (static_cast<double>(arr[i]) / arr[i - 1] != geometricRatio)
        {
            isGeometric = false;
        }
    }

    if (isArithmetic)
    {
        return "Arithmetic";
    }
    if (isGeometric)
    {
        return "Geometric";
    }

    return "-1";
}

int main()
{
    int n;
    cin >> n;
    vector<int> input(n);

    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cout << "Output: " << ArithGeo(input) << endl;

    return 0;
}