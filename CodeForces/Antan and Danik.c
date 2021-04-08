#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    char str[200009];
    scanf("%s",str);
    int x=0,y=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='A')
            x++;
        if(str[i]=='D')
            y++;
    }
    if(x>y)
        printf("Anton\n");
    else if(y>x)
        printf("Danik\n");
    else if(x==y)
        printf("Friendship\n");

    return 0;
}
