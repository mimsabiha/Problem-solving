#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{

int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    set<double>s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int r;
        cin >> r;
        v.pb(r);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            double q = ((v[j]-v[i])/2.0);
            s.insert(q);
        }
    }

    int ans = s.size();

    cout << ans << endl;
}
}
