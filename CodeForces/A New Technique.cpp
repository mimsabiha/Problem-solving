#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{

long long t;
cin >> t;
while(t--)
{
    long long n,m,j;
    cin >> n >> m;
    int o=10000;
    long long  arr[o][o],row[o*o],col[o*o];
     for(long long i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            arr[i][j]=0;
            col[j]=0;
        }
        row[j]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            long long p;
            cin >>p;
            col[p]=j;
        }
    }

    for(int i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            long long p ;
            cin >> p;
            row[p]=j;

        }
    }
    long long x= n*m;
    for(int i=1;i<=x;i++)
    {
       arr[row[i]][col[i]]=i;
    }

    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //cout << endl;
}
}
