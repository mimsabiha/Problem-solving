#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        vector < long long > v;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        //long long

        for(long long i=1;i<=k;i++)
            v[0] += v[i];

        cout << v[0] << endl;
    }
}
