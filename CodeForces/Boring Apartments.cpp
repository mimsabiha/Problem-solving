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
    int x;
    cin >> x;
    string a = to_string(x);
    int y = a.size();
    //cout << y << endl;
    int p = a[0]-'0';
   // cout << p << endl;
    int r = ((p-1));
    int ans = r*10;

    for(int i=1;i<=(y);i++)
        ans+=i;

    cout << ans << endl;
}
}
