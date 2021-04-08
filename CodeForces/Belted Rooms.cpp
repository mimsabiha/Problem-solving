#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define tt true




using namespace std;

int main()
{

int t;
cin >> t;
while(t--)
{
    int n,ct=0,cp=0;
    cin >> n;
    char a[300002];
    scanf("%s",a);
    //cout << a << endl;
    //vector < pair < int ,int > > v;
    bool v[300002][5];
    long long cnt=0,chk=0;
    set<int > s;
    for(int i=0;i<n;i++)
        {v[i][0]=false;
        v[i][1]=false;
        }
    for(int i=0;i<n;i++)
    {
        //cout << i << a[i] << endl;
       // cout << v[2][0] << " " << v[2][1] << endl;
        if(a[i]=='-' && i!=(n-1))
        {
            v[i][0]=tt;
            v[i][1] = tt;
            v[i+1][0]=tt;
            v[i+1][1] =tt;
            s.insert(i);
            s.insert(i+1);

        }
        else if(a[i]=='-' && i==(n-1))
        {
            v[i][0]=tt;
            v[i][1] = tt;
            v[0][0]=tt;
            v[0][1] = tt;
             s.insert(i);
            s.insert(0);


        }
        else if(a[i]=='>' && i!=(n-1))
        {
            v[i][1]=tt;
            v[i+1][0]=tt;
            ct++;
        }
        else if(a[i]=='>' && i==(n-1) )
        {
            v[i][1] =tt;
            v[0][0] =tt;
            ct++;
        }
        else if(a[i]=='<' && i!=(n-1) )
        {
            v[i][0] =tt;
            v[i+1][1] =tt;
            cp++;
        }
        else if(a[i]=='<' && i==(n-1) )
        {
            v[i][0] =tt;
            v[0][1] =tt;
            cp++;
        }
    }


    for(int i=0;i<n;i++)
    {
        if( (v[i][0]==tt) && (v[i][1]==tt) )
            {cnt++;}

        //cout << v[i][0] << v[i][1] << endl;
    }
    int p = s.size();
    //cout << cp << ct << endl;

   if(ct==n)
    {cout << n << endl;}
   else if(cp==n)
    cout << n << endl;
   else if(ct==0)
    cout << n << endl;
   else if(cp==0)
    cout << n << endl;
   else if(ct!=0 && cp!=0)
    cout << p << endl;
}
}
