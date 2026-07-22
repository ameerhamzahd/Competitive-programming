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
        bool found = false;
        for (int x : frame)
            if (x == pages[i])
                found = true;

        if (!found)
        {
            if (frame.size() < frames)
            {
                frame.push_back(pages[i]);
            }
            else
            {
                int idx = -1, farthest = i + 1;
                for (int j = 0; j < frame.size(); j++)
                {
                    int k;
                    for (k = i + 1; k < n; k++)
                        if (frame[j] == pages[k])
                            break;
                    if (k > farthest)
                    {
                        farthest = k;
                        idx = j;
                    }
                }
                if (idx == -1)
                    idx = 0;
                frame[idx] = pages[i];
            }
            faults++;
        }
    }

    cout << "Total Page Faults(opt): " << faults;
    return 0;
}