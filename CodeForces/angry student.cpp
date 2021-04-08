#include<bits/stdc++.h>

using namespace std;
int kr[109];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        memset(kr,0,sizeof kr);
        char str[108];
        int p;
        int l=0;
        scanf("%d %s",&p,str);
        for(int i=0;i<p;i++)
        {
            if(str[i]=='A')
                {for(int j=i+1;j<p && str[j]=='P';j++)
                {
                    int r = j-i;
                    l = max(r,l);

                }
                }
        }
       // sort(kr,kr+p);


        printf("%d\n",l);
    }
}
