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
    long long  n,m,x;
    cin >> n >> m >> x;
    long long int a = x%n;
    if(a!=0)
    {long long int b = ((x - a)/(n*1.0));
    long long int c = ((a-1)*m);
   // cout << b << " " << c << endl;

    cout << b+1+c << endl;
    }
    else if(a==0)
    {
        long long d = (x/(n*1.0));
        long long k = (n-1 )*m;
        cout << d+k << endl;
    }

}
}
