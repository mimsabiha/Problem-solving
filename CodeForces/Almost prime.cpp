#include<bits/stdc++.h>
#define pb push_back
#define f first





using namespace std;



bool ckprime(int p)
{
    set<int>v;
     for(int i=2;i<=p;i++)
    {
        while(p%i==0)
            {
                //cout << i << endl;
                v.insert(i);
                p /= i;

            }


    }
    int r = v.size();
    //cout << r << endl;
    if(r==2)
      return true;
    else if(r!=2)
        return false;

}

int main()
{
    int isprime[3001];
    for(int i=0;i<=3001;i++)
        isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<=3001;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=3001;j+=i)
                isprime[j] = 0;
        }
    }
    int n;
    cin >> n;
    int cnt=0;
   for(int i=1;i<=n;i++)
   {
       if(isprime[i]==0)
          { bool w = ckprime(i);
          if(w==true)
            cnt++;
          }
   }

   cout << cnt << endl;



}
