#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    int cnt=0;
    char str[30];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        if(strcmp(str,"Tetrahedron")==0)
            cnt+=4;
        else if(strcmp(str,"Cube")==0)
            cnt+=6;
        else if(strcmp(str,"Octahedron")==0)
            cnt+=8;
        else if(strcmp(str,"Dodecahedron")==0)
            cnt+=12;
        else if(strcmp(str,"Icosahedron")==0)
            cnt+=20;
    }

    printf("%d\n",cnt);

    return 0;
}
