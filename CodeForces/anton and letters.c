#include<stdio.h>
#include<string.h>

int main()
{
    char str[2000];
    scanf("%[A-Z a-z,{}]s",str);
    int i,k,j,cnt=0;
    char temp;
    k= strlen(str);
    for(i=0;i<k;++i){
        for(j=i+1;j<k;++j){
        if(str[j]<str[i]){
            temp = str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        }
    }
    for(i=0;i<k;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            cnt++;
            if(str[i]==str[i+1])
            cnt--;
        }

    }
    printf("%d\n",cnt);
    return 0;
}
