#include<stdio.h>
int main()
{
    int n,a,b,c,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a==0&&b==1&&c==1)||(a==1 && b==0&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==1&&c==1) )
                count++;

        }
        printf("%d\n",count);

    return 0;
}
