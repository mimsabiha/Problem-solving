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
    int num;
    scanf("%d",&num);
    vector<int > vp,sp;
    long long k =0,p=0,nun=0,nup=0;
    bool ck=false;
    for(int i=0;i<num;i++)
    {
        int x;
        cin >> x;
        //v.pb(g);

        if(x>=0)
            {k+=x;
            vp.pb(x),nup++;}
        else if(x<0)
           {
            p += (x*-1);
            sp.pb(x);
            nun++;}
    }


    if(k==p)
        ck = true;

    if(ck==true)
    {
        cout << "NO" << endl;
        continue;

    }
    cout << "YES" << endl;
    if(k>p)
    {
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        sort(sp.begin(),sp.end());
        for(int i=0;i<vp.size();i++)
            cout << vp[i] << " ";
        for(int i=0;i<sp.size();i++)
            cout << sp[i] << " ";
            cout << endl;
    }
     if(k<p)
    {
        sort(sp.begin(),sp.end());
        reverse(sp.begin(),sp.end());
        sort(vp.begin(),vp.end());
        for(int i=0;i<sp.size();i++)
            cout << sp[i] << " ";
        for(int i=0;i<vp.size();i++)
            cout << vp[i] << " ";
            cout << endl;
    }



}
}
