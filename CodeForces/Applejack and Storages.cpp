#include<bits/stdc++.h>
#include<math.h>
#define st string
#define ll long long int
#define con continue
#define br break
#define rt return 0
#define fr first
#define sec second
using namespace std;


int main()
{
//ll tc; cin>>tc; while(tc--){

ios_base :: sync_with_stdio (false) ;


 	ll n,m,i,j,a=0,ans=0,k=0,cnt=0,b=1;
  ll c=1,x,q,y,d=0,mx=0,mn=INT_MAX;
  st s,ss,str,strn;

  char ch;
    cin>>n;

    ll ara[n+1],taj[n+1],bra[n+1];
    map<ll,ll>mp;
    map<ll,ll>::iterator it;
     map<ll,ll>bp;
    pair<ll,ll>pr[n+1];
    for(i=1;i<=n;i++)
    {
       cin>>x;
      mp[x]++;
      k=mp[x];
 if(k==2||k==4||k==6||k==8) bp[k]++;
      }
   cin>>q;
   for(i=1;i<=q;i++)
  {
    cin>>ch>>x;
    if(ch=='+')
    {
      mp[x]++;
      k=mp[x];
 if(k==2||k==4||k==6||k==8) bp[k]++;

    }
   else
    {
      k=mp[x];
 if(k==2||k==4||k==6||k==8) bp[k]--;
     mp[x]--;
    }


    if(bp[8] || bp[4]>=2 || (bp[6] && bp[2]>=2)|| (bp[4] && bp[2]>=3)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }







}
