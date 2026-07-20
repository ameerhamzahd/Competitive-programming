#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, frames;
    cout << "Enter number of pages: ";
    cin >> n;

    int pages[n];
    cout << "Enter page reference string:\n";
    for (int i = 0; i < n; i++)
        cin >> pages[i];

    cout << "Enter number of frames: ";
    cin >> frames;

    queue<int> q;
    int faults = 0;

    for (int i = 0; i < n; i++)
    {
        bool found = false;
        queue<int> temp = q;

        while (!temp.empty())
        {
            if (temp.front() == pages[i])
                found = true;
            temp.pop();
        }

        if (!found)
        {
            if (q.size() == frames)
                q.pop();
            q.push(pages[i]);
            faults++;
        }
    }

    cout << "Total Page Faults(FIFO): " << faults;
    return 0;
}