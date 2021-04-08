#include<bits/stdc++.h>
#define pb push_back
#define ll long long


using namespace std;

int main()
{
    long long n,m,a;
    int64_t md = 1e9+7;
    cin >> n >> m;
    vector < long long > v,p;
    for(int i=0;i<n;i++)
    {
        int64_t r;
        cin  >> r;
        v.push_back(r);
    }
    for(int i=0;i<m;i++)
    {
        int64_t r;
        cin  >> r;
        p.pb(r);
    }
    int64_t q = v[0];
    long long h=0;
    for(int i=1;i<n;i++)
    {
        h = __gcd(v[i]-q,h);
        q = v[i];
    }
    //int64_t q = v[0];
    bool chk = false;
    int t ;
    for(int i=0,j=1;i<m;i++,j++)
    {

       if(h%p[i]==0)
       {
           chk=true;
           t = i+1;
           break;

       }
       else
        continue;

    }


    if(chk==true)
        cout << "YES" << "\n" << v[0] << " "  << t << endl;
    else
        cout << "NO" << endl;



}
