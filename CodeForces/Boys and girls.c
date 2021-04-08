#include<stdio.h>
#include<string.h>

int main()
{

    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int n,m;
    scanf("%d %d",&n,&m);
    char str[10000];

    if(n==m){
    int z=n+m;
    for(int i=0;i<z;i++)
    {
        if(i%2==0)
            str[i]='G';
        if(i%2!=0)
          str[i]='B';


    }
    }
    else if(n>m)
        {
            int k= n+m;
            int i=0;
            while(i<(2*m))
            {
                if(i%2==0)
                    str[i++]='B';
                if(i%2!=0)
                   str[i++]='G';


            }
            int j=(2*m);
            while(j<k){
                str[j++]='B';

            }
        }
        else if(m>n)
        {
            int l= m+n;
            int i=0;
            while(i<(2*n))
            {
                if(i%2==0)
                    str[i++]='G';
                if(i%2!=0)
                   str[i++]='B';

            }
            int j=2*n;
            while(j<l)
            {
                str[j++]='G';
            }
        }





    printf("%s\n",str);
    return 0;

}
