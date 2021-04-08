#include<bits/stdc++.h>
#define pb push_back

using namespace std;

//668 4967 2192

int main()
{

int n,m;
cin >> n >> m;
vector< pair < int , bool > > s,p;
for(int i=0;i<n;i++)
{
    int y;
    cin >> y;
    //s.insert(y);
    s.pb({y,true});
}
sort(s.begin(),s.end());
for(int i=0;i<m;i++)
{
    int y;
    cin >> y;
    p.pb({y,true});
}
sort(p.begin(),p.end());
int cnt =0;

if(n>=m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a = abs(s[i].first-p[j].first);
            if(a<=1 && s[i].second==true && p[j].second==true)
            {cnt++;
            p[j].second = false;
            break;
            }
        }
    }
}
else
{

{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int a = abs(p[i].first-s[j].first);
            if(a<=1  && p[i].second==true && s[j].second==true)
            {cnt++;
           // s.erase(i);

            s[j].second = false;
            break;
            }
        }
    }
}
}


cout << cnt << endl;

}
