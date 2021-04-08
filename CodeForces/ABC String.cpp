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

int t;
cin >> t;
while(t--)
{
    string a;
    cin >> a;
    int s= a.length();

    int n_a=0,n_b=0,n_c = 0;
    for(int i=0;i<s;i++)
    {
        if(a[i]=='A')
            n_a++;
        else if(a[i]=='B')
            n_b++;
        else
            n_c++;
    }
    bool na=false,nb = false,nc=false;

    if(n_a>=n_c && n_a>=n_b)
        na=true;
    else if(n_b>=n_c && n_b>=n_a)
        nb = true;
    else
        nc = true;

    if(na==true)
    {
        int cnt_a = 0;
        int cnt_an = 0;
        bool fin = false;
        for(int i=0;i<s;i++)
        {
            if(i%2 && cnt_a<cnt)
            if(a[i]=='B' || a[i]=='C')
            cnt_an++;
            else if(a[i]=='A')
                cnt_a++;

        }

    }


}
}
