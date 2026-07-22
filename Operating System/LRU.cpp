#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, frames;
    cout << "Enter number of pages: ";
    cin >> n;

    vector<int> pages(n);
    cout << "Enter page reference string:\n";
    for (int i = 0; i < n; i++)
        cin >> pages[i];

    cout << "Enter number of frames: ";
    cin >> frames;

    vector<int> frame;
    int faults = 0;

    for (int i = 0; i < n; i++)
    {
        auto it = find(frame.begin(), frame.end(), pages[i]);

        if (it == frame.end())
        {
            if (frame.size() == frames)
                frame.erase(frame.begin());
            frame.push_back(pages[i]);
            faults++;
        }
        else
        {
            frame.erase(it);
            frame.push_back(pages[i]);
        }
    }

    cout << "Total Page Faults(LRU): " << faults;
    return 0;
}