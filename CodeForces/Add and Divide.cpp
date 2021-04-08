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
    long long a,b;
    cin >> a >> b;
    long long cnt =0;
    if(b==1)
        cnt++,b+=1;
    int r ;
    if(b>a)
    {
        cout << 1 << endl;
        continue;
    }

    int e;
    while(a>b)
    {
        a = (floor) (a/(b*1.0));
        cnt++;
    }

    cout << cnt << endl;
}



}
