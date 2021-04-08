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

string a;

int check()
{
    vector<int>p;
    for(int i=a.size()-1;i>=0;i--)
        if(a[i]=='x')
            return (a.size()-i+1);



          //return 0;
}

int main()
{

int t;
cin >> t;
while(t--)
{
    int n,k;
    cin >> n >> k;
    //string a;
    cin >> a;
    vector<int> v,postar;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='*')
            v.pb(i+1);
    }
    int r = v.size();
    int cnt =0,curx=-1;
    for(int i=0;i<v.size();i++)
    {
         //int q = check();
        //cout << v[i] << " " << q << " "  << v[i+1] << " " << i  << endl;

        if(i==0)
        a[v[i]-1] = 'x', curx=v[i],cnt++;
        else if(i==r-1 && i!=0)
            a[v[i]-1] = 'x',curx=v[i],cnt++;
        else if(i<=r-1 && (v[i]-curx)-1+(v[i+1]-v[i])>=k)
        {

         a[v[i]-1] = 'x',curx=v[i],cnt++;
        }

    }

    cout << cnt << endl;
}
}

/*
8 3
*..*.**.
*/
