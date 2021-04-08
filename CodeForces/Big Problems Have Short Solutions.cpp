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
    long long n;
    cin >> n;
    long long p = ((n*(n+1))/2.0);
    //cout << p << endl;
     long long k= (ceil)(n/2.0);
     //cout << k << endl;
    int64_t ans = p+ (k*k);
    cout << ans << endl;
}
}
