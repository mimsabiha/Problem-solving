#include<stdio.h>

int a[5][5];

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++){

          if(a[i][j]==1)
    {
        if(i>=j)
            printf("%d\n",i-j);
            else
            printf("%d\n",j-i);
    }
        }
    }
    return 0;
}
