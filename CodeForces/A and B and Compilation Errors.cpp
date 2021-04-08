#include<bits/stdc++.h>

using namespace std;
map < long long ,long long > m,mp,mm;

int main()
{

long long n;
cin >> n;
vector<long long > a,b,c;
 map<long long,long long >::iterator it ;
    map<long long,long long>::iterator it1 ;
    map<long long,long long >::iterator it2 ;

for(int i=0;i<n;i++)
{
    long long t;
    cin >> t;
    a.push_back(t);
    m[t]++;
}
for(int i=0;i<n-1;i++)
{
    long long t;
    cin >> t;
    b.push_back(t);
    mp[t]++;
}
for(int i=0;i<n-2;i++)
{
    long long t;
    cin >> t;
    //a.push_back(t);
    mm[t]++;
}



long long f=-1,s=-1;
for(int i=0;i<n;i++)
{
    it = m.find(a[i]);
    it1 = mp.find(a[i]);

   if(it->second != it1->second)
    f = a[i];
}
for(int i=0;i<n-1;i++)
{
it = mp.find(b[i]);
    it1 = mm.find(b[i]);

   if(it->second != it1->second)
    s = b[i];
}

cout << f << "\n" << s << endl;





}
