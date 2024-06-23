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
    int n, p, q, x, y;
    set<int> levels;
    cin >> n;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> x;
        levels.insert(x);
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> y;
        levels.insert(y);
    }

    if (levels.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}