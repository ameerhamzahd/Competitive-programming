#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bno, pno;

    cout << "Enter number of memory blocks: ";
    cin >> bno;

    vector<int> bsize(bno);
    vector<int> flags(bno, 0);       // 0 = free, 1 = allocated
    vector<int> allocation(bno, -1); // -1 = not allocated

    cout << "Enter size of each block:\n";
    for (int i = 0; i < bno; i++)
        cin >> bsize[i];

    cout << "\nEnter number of processes: ";
    cin >> pno;

    vector<int> psize(pno);
    cout << "Enter size of each process:\n";
    for (int i = 0; i < pno; i++)
        cin >> psize[i];

    // First Fit Allocation
    for (int i = 0; i < pno; i++)
    {
        for (int j = 0; j < bno; j++)
        {
            if (flags[j] == 0 && bsize[j] >= psize[i])
            {
                allocation[j] = i; // Allocate process i to block j
                flags[j] = 1;
                break; // move to next process
            }
        }
    }

    // Display allocation table
    cout << "\nBlock No.\tBlock Size\tProcess No.\tProcess Size\n";
    for (int i = 0; i < bno; i++)
    {
        cout << i + 1 << "\t\t" << bsize[i] << "\t\t";
        if (flags[i] == 1)
            cout << allocation[i] + 1 << "\t\t\t" << psize[allocation[i]];
        else
            cout << "Not allocated";
        cout << endl;
    }

    return 0;
}
