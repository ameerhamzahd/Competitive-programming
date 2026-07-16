#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // Number of processes
    int m = 3; // Number of resources

    // Allocation Matrix
    vector<vector<int>> alloc = {
        {0, 1, 0}, // P0
        {2, 0, 0}, // P1
        {3, 0, 2}, // P2
        {2, 1, 1}, // P3
        {0, 0, 2}  // P4
    };

    // Maximum Need Matrix
    vector<vector<int>> maxNeed = {
        {7, 5, 3}, // P0
        {3, 2, 2}, // P1
        {9, 0, 2}, // P2
        {2, 2, 2}, // P3
        {4, 3, 3}  // P4
    };

    // Available resources
    vector<int> avail = {3, 3, 2};

    vector<int> f(n, 0); // Finished processes
    vector<int> output;  // Safe sequence
    vector<vector<int>> need(n, vector<int>(m));

    // Calculate remaining need
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            need[i][j] = maxNeed[i][j] - alloc[i][j];

    // Banker's Algorithm
    int count = 0;
    while (count < n)
    {
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (!f[i])
            {
                bool canAllocate = true;
                for (int j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        canAllocate = false;
                        break;
                    }
                }

                if (canAllocate)
                {
                    // Process can execute
                    for (int j = 0; j < m; j++)
                        avail[j] += alloc[i][j];

                    output.push_back(i);
                    f[i] = 1;
                    found = true;
                    count++;
                }
            }
        }

        if (!found)
        {
            cout << "The system is NOT in a safe state.\n";
            return 0;
        }
    }

    // Print Safe Sequence
    cout << "Following is the SAFE sequence:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << output[i];
        if (i != n - 1)
            cout << " -> ";
    }
    cout << endl;

    return 0;
}
