#include <bits/stdc++.h>
using namespace std;

int main()
{
    int process, resource;
    cout << "Enter the total number of processes: ";
    cin >> process;

    cout << "Enter the total number of resources: ";
    cin >> resource;

    vector<int> maxResources(resource);
    vector<vector<int>> allocation(process, vector<int>(resource));
    vector<vector<int>> maxNeed(process, vector<int>(resource));
    vector<vector<int>> need(process, vector<int>(resource));
    vector<int> available(resource);
    vector<int> finished(process, 0);

    // Input max resources
    cout << "Enter maximum resources:\n";
    for (int i = 0; i < resource; i++)
        cin >> maxResources[i];

    // Input allocation table
    cout << "Enter allocation matrix:\n";
    for (int i = 0; i < process; i++)
        for (int j = 0; j < resource; j++)
            cin >> allocation[i][j];

    // Input maximum need table
    cout << "Enter maximum need matrix:\n";
    for (int i = 0; i < process; i++)
        for (int j = 0; j < resource; j++)
            cin >> maxNeed[i][j];

    // Calculate available resources
    for (int j = 0; j < resource; j++)
    {
        int sum = 0;
        for (int i = 0; i < process; i++)
            sum += allocation[i][j];

        available[j] = maxResources[j] - sum;
    }

    // Calculate need matrix
    for (int i = 0; i < process; i++)
        for (int j = 0; j < resource; j++)
            need[i][j] = maxNeed[i][j] - allocation[i][j];

    cout << "\nAvailable Resources:\n";
    for (int i = 0; i < resource; i++)
        cout << available[i] << " ";
    cout << "\n";

    // Banker's safety algorithm
    int completed = 0;
    while (completed < process)
    {
        bool safeState = false;

        for (int i = 0; i < process; i++)
        {
            if (!finished[i])
            {
                bool canExecute = true;

                for (int j = 0; j < resource; j++)
                {
                    if (need[i][j] > available[j])
                    {
                        canExecute = false;
                        break;
                    }
                }

                if (canExecute)
                {
                    cout << "Process P" << i + 1 << " is executing\n";

                    for (int j = 0; j < resource; j++)
                        available[j] += allocation[i][j];

                    finished[i] = 1;
                    completed++;
                    safeState = true;
                }
            }
        }

        if (!safeState)
        {
            cout << "\nSystem is in UNSAFE state!\n";
            return 0;
        }
    }

    cout << "\nSystem is in SAFE state\n";
    cout << "Final Available Resources:\n";
    for (int i = 0; i < resource; i++)
        cout << available[i] << " ";

    return 0;
}
