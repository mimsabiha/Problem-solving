#include<stdio.h>


int main()
{
    int tin;
    scanf("%d",&tin);
     for(int i=0;i<tin;i++)
     {
         long long int a,b,c,d,e,f;
         scanf("%lld %lld %lld",&a,&b,&c);
         scanf("%lld %lld %lld",&d,&e,&f);
         long long int res =0;
         if(e>0 && e>=c)
         {
             res += (c)*2;
             e -= c;
             c=0;
         }
         else if(e>0 && c>0 && e<c)
         {
              res += (e)*2;
             c -= e;
             e=0;

         }


         if(b>0 && e>0 && b>=e)
            b -=e,e=0;
         else if(b>0 && e>0 && e>b)
         {
             b=0;
             e -= b;
         }


         if(b>0 && d>0 && b>=d)
            b -=d,d=0;
         else if(b>0 && d>0 && b<d )
            d -= b,b=0;


        if(f>0 && c>0 && f>=c)
        {
            f -=c;
            c=0;
        }
        else if(f>0 && c>0 && f<c)
            c -=f,f=0;


         if(f>0 && a>0 && f>=a)
        {
            f -=a;
            c=0;
        }
        else if(f>0 && a>0 && f<a)
            a -=f,f=0;


        res -= f*2;



       printf("%lld\n",res);





     }
}
