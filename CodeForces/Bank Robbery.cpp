#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{

int t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    long long a;
    scanf("%lld",&a);
    bool pp = false;
    printf("Case %d: ",i);
    for(int k=9;k>=0;k--)
    {
        if((a-k)%9==0)
                {
                    if(pp) printf(" ");
                    printf("%lld",a+((a-k)/9));
                    pp=true;
                }

    }
    printf("\n");
}
}
