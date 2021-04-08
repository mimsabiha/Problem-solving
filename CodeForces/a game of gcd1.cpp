#include<bits/stdc++.h>
#define sz 100005
long long left[sz];
long long right[sz];
long long gdp[sz];
long long arr[sz];
long long k;
int n;
void cnt(arr[n])
{
    for(int i=1;i<n;i++)
    {
        left[i] = gcd(&left[i-1],&arr[i])

    }

}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        //int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("%lld\n",k);
        cnt(arr);
    }
}
