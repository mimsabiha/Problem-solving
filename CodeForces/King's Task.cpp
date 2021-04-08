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

vector<int>v,p;

int cnt =0;


void init(int n)
{
    v.pb(0);
    for(int i=1;i<=2*n;i++)
        v.pb(i);
}

void ch1()
{
    for(int i=1;i<=2*n;i+=2)
    {
        if(v[i]==i+1 && v[i+1]==i)
        {swap(v[i],v[i+1]);
        cnt++;}
    }
}


void ch2()
{
    for(int i=n,j=n+1;i>=0;i--,j++)
    {
     if(v[i]==)
    }
}

int main()
{
    int n;
    cin >> n;
    init(n);
    p.pb(0);
    for(int i=0;i<n;i++)
    {
        int r;
        cin >> r;
        p.pb(r);
    }
     bool chk1 = ch1();




}
