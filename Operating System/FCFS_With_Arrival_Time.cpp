#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float awt = 0, atat = 0;

    cout << "Enter the number of processes: ";
    cin >> n;

    vector<int> bt(n), at(n), wt(n), tat(n), temp(n + 1);

    cout << "Enter the burst time of the processes:\n";
    for (int i = 0; i < n; i++)
        cin >> bt[i];

    cout << "Enter the arrival time of the processes:\n";
    for (int i = 0; i < n; i++)
        cin >> at[i];

    temp[0] = 0;

    cout << "\nProcess\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; i++)
    {
        temp[i + 1] = temp[i] + bt[i];

        wt[i] = temp[i] - at[i];
        if (wt[i] < 0) // Safety check
            wt[i] = 0;

        tat[i] = wt[i] + bt[i];

        awt += wt[i];
        atat += tat[i];

        cout << i + 1 << "\t\t"
             << bt[i] << "\t\t"
             << at[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }

    awt /= n;
    atat /= n;

    cout << "\nAverage Waiting Time: " << awt << endl;
    cout << "Average Turnaround Time: " << atat << endl;

    return 0;
}
