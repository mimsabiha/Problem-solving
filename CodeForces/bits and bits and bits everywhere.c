#include<stdio.h>
int main()
{
    long long int sum=0;
    long long int k;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%llu",&k);
    while(k!=0)
    {
        sum+=(k%2);
        k/=2;
    }
    if(sum%2!=0)
        printf("Case %d: odd\n",i);
    if(sum%2==0)
        printf("Case %d: even\n",i);
        sum=0;}


        return 0;

}
