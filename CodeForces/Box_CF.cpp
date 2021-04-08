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
    int v[n+1],p[n+1];
    set<long long>s;


    bool chk[100002];
    bool cp = true;
    for(long long i=1;i<=n;i++)
    {

        cin >> v[i];

        s.insert(i);
        chk[i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        if(i<n && v[i]>v[i+1])
        {
            cp = false;
            break;

        }
        if(v[i]<i)
        {
           cp = false;
           break;

        }
    }
    for(int i=1;i<=n;i++)
    {
        if(chk[v[i]]==false)
        {
            chk[v[i]] = true;
            p[i] = (v[i]);
            s.erase(v[i]);
        }
        else if(chk[v[i]]==true)
        {
            p[i] = (*s.begin());
            s.erase(s.begin());
        }


    }



    if(cp==false)
        cout << -1 << endl;
    else{   for(int i=1;i<=n;i++)
            cout << p[i] << " ";

    cout << endl;}


}
}
