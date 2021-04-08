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
    int n,x;
    cin >> n >> x;
    vector< int > a,b;
    a.clear();
    b.clear();
    for(int i=0;i<n;i++)
    {
        int q;
        cin >> q;
        a.pb(q);
    }
     for(int i=0;i<n;i++)
    {
        int q;
        cin >> q;
        b.pb(q);
    }

   sort(b.begin(),b.end());
   sort(a.begin(),a.begin());
   reverse(b.begin(),b.end());
   bool chk = false;
   for(int i=0;i<n;i++)
   {
       if(a[i]+b[i]<=x)
        chk = true;
       else if(a[i]+b[i]>x)
       {
           chk = false;
           break;
       }
   }

   if(chk==true)
    cout << "Yes" << endl;
   else if(chk==false)
    cout << "No" << endl;

}

}
