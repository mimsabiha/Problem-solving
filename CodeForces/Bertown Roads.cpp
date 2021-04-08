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

vector<int>v[100009];
vector<pair<int,int>>lis;
int vis[100009],in[100009],low[100009];
bool chk= false;
int tim;


void dfs(int node,int par)
{
    vis[node] = 1;
    in[node] = low[node] = tim++;


    for(int child:v[node])
    {
        if(child==par)
            continue;

        if(vis[child])
        {
            low[node] = min(low[node],in[child]);

            if(in[child]<in[node])
            lis.pb({node,child});

        }
        else
        {
            dfs(child,node);
            if(low[child]>in[node])
            {
                chk = true;
                return;
            }
            lis.pb({node,child});
            low[node] = min(low[node],low[child]);
        }
    }
}

int main()
{
    int n,m,a,b;
    cin >> n >> m;
    while(m--)
        cin >> a >> b , v[a].pb(b) , v[b].pb(a);

        dfs(1,-1);


        if(chk==true)
        {
            cout << 0 << endl;
        }
        else
        {
            for(pair<int,int> k :lis)
                cout << k.first << " " << k.second << endl;
        }


}
