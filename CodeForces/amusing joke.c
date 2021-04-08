#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200],str2[200],str3[400];
    scanf("%s %s %s",str1,str2,str3);
    strcat(str1,str2);
    int i,j,k;
    k = strlen(str1);
    char temp;
    for(i=0;i<k;++i){
        for(j=i+1;j<k;++j){
        if(str1[j]<str1[i]){
            temp = str1[i];
            str1[i]=str1[j];
            str1[j]=temp;
        }
        }
    }
    int z;
    z = strlen(str3);
    for(i=0;i<z;++i){
        for(j=i+1;j<z;++j){
        if(str3[j]<str3[i]){
            temp = str3[i];
            str3[i]=str3[j];
            str3[j]=temp;
        }
        }
    }
    if( (strcmp(str1,str3))==0 )
        printf("YES\n");
    else
        printf("NO\n");





    return 0;
}
