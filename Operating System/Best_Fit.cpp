#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "BestFit\nEnter number of memory blocks: ";
    cin >> m;

    int block[m];
    bool allocated[m] = {false};

    cout << "Enter block sizes:\n";
    for (int i = 0; i < m; i++)
        cin >> block[i];

    cout << "Enter number of processes: ";
    cin >> n;

    int process[n];
    cout << "Enter process sizes:\n";
    for (int i = 0; i < n; i++)
        cin >> process[i];

    for (int i = 0; i < n; i++)
    {
        int best = -1;
        int minDiff = INT_MAX;

        for (int j = 0; j < m; j++)
        {
            if (!allocated[j] && block[j] >= process[i])
            {
                int diff = block[j] - process[i];
                if (diff < minDiff)
                {
                    minDiff = diff;
                    best = j;
                }
            }
        }

        if (best != -1)
        {
            cout << "Process " << i + 1 << " allocated to block " << best + 1 << endl;
            allocated[best] = true;
        }
        else
        {
            cout << "Process " << i + 1 << " cannot be allocated" << endl;
        }
    }
    return 0;
}
