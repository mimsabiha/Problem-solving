#include<bits/stdc++.h>

using namespace std;

int main()
{

int tin;
scanf("%d",&tin);
while(tin--)
{
    long long x1,y1,x2,y2;

    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
    if(x1==x2 && y1==y2)
        printf("0\n");
    else if(x1==x2)
       {
        long long int k = abs(y1-y2);
        cout << k ;
        cout << endl;
       }
    else if(y1==y2){
        long long int k = abs(x1-x2);
        cout << k ;
        cout << endl;
    }



    else
    {
        long long a = abs(x1-x2);
        long long b = abs(y1-y2);
        long long pp = a+b+2;
       cout << pp ;
       cout << endl;
    }
}
}
