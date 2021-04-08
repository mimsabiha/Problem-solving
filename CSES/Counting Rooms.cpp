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

char arr[1001][1001];
bool vis[1001][1001];
int n,m;

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};


bool isValid(int a,int b)
{
    if(a<1 || a>n || b<1 || b>m)
        return false;

    if(arr[a][b]=='#' || vis[a][b]==true)
        return false;

    return true;
}


void dfs(int x,int y)
{
    vis[x][y]  = true;

    for(int i=0;i<=3;i++)
        if(isValid(x+dx[i],y+dy[i]))
        dfs(x+dx[i],y+dy[i]);

}


int main()
{

    //int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt =0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='.' && vis[i][j]==false)
            {
                //cnt++;
                dfs(i,j);
                cnt++;
            }

        }
    }
    cout << cnt << endl;


}
