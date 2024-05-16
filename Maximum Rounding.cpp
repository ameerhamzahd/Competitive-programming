#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,i;
        string s;
        cin >> s;
        vector<int>v;
        n = stoi(s);
        while(n!=0)
        {
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        for(i=v.size()-1; i>=0; i--)
        {
            if(i=v.size()-1)
            {
                if(v[i]>=5)
                {
                    v[i]+=1;
                }
                else
                {
                    v[i]=v[i];
                }
            }
            else
            {

            }
        }
    }

    return 0;
}
