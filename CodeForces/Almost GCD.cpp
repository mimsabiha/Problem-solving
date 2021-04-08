#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{
    int n;
    cin >> n;
    int a,ans=1;
    cin >> a;
    for(int i=1;i<n;i++)
    {
        int k;
        cin >> k;
        ans = max(ans,__gcd(a,k));
        a = k;


    }
    cout << ans << endl;


}
