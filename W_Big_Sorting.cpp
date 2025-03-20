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

int main()
{
    int n;
    cin >> n;
    vector<string> unsorted(n);

    for (int i = 0; i < n; i++)
    {
        cin >> unsorted[i];
    }

    sort(unsorted.begin(), unsorted.end(), [](const string &a, const string &b)
         {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b; });

    for (const string &num : unsorted)
    {
        cout << num << endl;
    }

    return 0;
}