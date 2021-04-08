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

char str[20];
cin >> str;
ll did = strlen(str);
ll ans = (1<<did) - 2;

for(int i=did-1,cnt=0;i>=0;i--,cnt++)
{
    if(str[i]=='7')
        ans += (1<<cnt);
}

cout << ans+1 << endl;
}
