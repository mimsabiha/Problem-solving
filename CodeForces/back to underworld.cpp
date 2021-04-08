#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#define sz 20006
#define pb push_back



using namespace std;


const int vamp=1;
const int lyk=2;
const int none=0;



vector<int> adj[sz];

int col[sz],vampire,lykans,cnt;
int ans=0;

void adj_clear()
{
    for(int i=0; i<sz; i++)
    {
        adj[i].clear();
    }
}


void BFS(int s)
{
    queue<int >T;
    col[s]=vamp;
    vampire++;
    T.push(s);

    while(!T.empty())
    {
        int u = T.front();
        T.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];

            if(col[v] == none)
            {
                T.push(v);

                if(col[u] == vamp)
                {
                    col[v] = lyk;
                    lykans++;
                }

                else
                {
                    col[v] = vamp;
                    vampire++;
                }
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    for(int e=1;e<=t;e++)
    {
        adj_clear();
        memset(col,0,sizeof(col));
        vampire=0;
        lykans=0;
        ans=0;
        int f;
        cin>>f;
        for(int i=0;i<f;i++)
        {
            int a,b;
           // cin >> a >>b ;
           scanf("%d %d",&a,&b);
            adj[b].pb(a);
            adj[a].pb(b);

        }

        for(int r=0; r<sz; r++)
        {
            if(!adj[r].empty() and col[r] == none)
            {
                vampire = 0;
                lykans = 0;

                BFS(r);

                ans += max(vampire , lykans);
            }
        }

        printf("Case %d: %d\n" , e , ans);
}

}

