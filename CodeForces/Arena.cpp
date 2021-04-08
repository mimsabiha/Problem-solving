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

int t;
cin >> t;
while(t--)
{
    map<int,int>m;
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(m[a]==0)
        {
            v.pb(a);

        }

        m[a]++;
    }

    sort(v.rbegin(),v.rend());
    int sum = 0;
    for(int i=0;i<v.size()-1;i++)
    {
        int r = v[i];

        sum += m[r];
    }

    cout << sum << endl;

}
}
