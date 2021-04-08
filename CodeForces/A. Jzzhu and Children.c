#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a[x];
    int i;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(a[i]%y!=0)
        a[i+x]=a[i]-y;

    }
}
