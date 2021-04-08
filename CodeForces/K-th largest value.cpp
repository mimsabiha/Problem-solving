#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define pi acos(-1)
#define ll long long
#define ldb long double
#define pii pair< int , int >
#define pll pair< ll , ll >




using namespace std;

int main()
{
    long long n,q,one=0;
    cin >> n >> q;
    vector<int> v,p;
    for(int i=0;i<n;i++)
    {
        int e;
        cin >> e;
        v.pb(e);
        if(e==1)
            one++;
    }
    while(q--)
    {
        int t,x;
        cin >> t >> x;
        if(t==1)
           {
               v[x-1] = 1 - v[x-1];
               if(v[x-1]==1)
                one++;
               else
                one--;
           }
        else if(t==2)
        {
            if(x<=one)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }


}
