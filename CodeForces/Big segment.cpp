#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    long long mintst;
    long long maxtst;
    long long minpos=0,maxpos=0;
    long long a[100006],b[100008];
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];

    }
    long long  mx=-10000000000, mn=10000000000;

     for(int i=0;i<n;i++)
    {
        mn= min(mn, a[i]);
        mx=max(mx, b[i]);
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]==mn && b[i]== mx) ans=i+1;
    }

    if(ans==0)
        cout << -1 << endl;
    else
        cout << ans << endl;

}






