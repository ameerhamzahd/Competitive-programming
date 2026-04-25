 #include<bits/stdc++.h>
 using namespace std;

int main()
{
    int i, n;
    cin >> n;
    int A[n];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A, A + n);

    for(i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
