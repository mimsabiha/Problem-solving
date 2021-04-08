#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{

int t;
scanf("%d",&t);
vector<int>v;
int chk=0,cnt=0;
//v.pb(-2);
for(int i=0;i<t;i++)
{
    int a;
    cin >> a;
    v.pb(a);
}
v.pb(0);
bool pre= false;
for(int i=1;i<=t;i++)
{
    //cout << v[i]-v[i-1] << endl;
    if(v[i]-v[i-1]==1)
    {
        if(i==1)
           {chk++;
            pre = true;
           }
        else if(i==t-1 && pre==true)
        {
            chk+=2;
        }
        else if(i==t-1 && pre==false)
        {
            chk++;
        }
        else
            chk++;

    }
    else if(v[i]-v[i-1]!=1)
    {
        cnt = max(cnt,chk);
        chk=0;
        pre = false;
    }

}
if(t==1)
    cout << 0 << endl;
else
cout << cnt-1 << endl;
}
