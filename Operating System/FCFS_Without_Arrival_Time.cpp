#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float awt = 0, atat = 0;

    cout << "Enter the number of processes: ";
    cin >> n;

    vector<int> bt(n), wt(n), tat(n);

    cout << "Enter the burst time of the processes:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> bt[i];
    }

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        for (int j = 0; j < i; j++)
        {
            wt[i] += bt[j];
        }

        tat[i] = wt[i] + bt[i];

        awt += wt[i];
        atat += tat[i];

        cout << i + 1 << "\t\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }

    awt /= n;
    atat /= n;

    cout << "\nAverage Waiting Time: " << awt << endl;
    cout << "Average Turnaround Time: " << atat << endl;

    return 0;
}