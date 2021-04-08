#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
cin >> t;
while(t--)
{

    int n;
    cin >> n;
    vector< long long > v;
    int arr[100004];
    for(long long i=0;i<n;i++)
    {
        long long h;
        cin >> h;
        long long p =abs(h);
        v.push_back(p);
        if(h<0)
          arr[i] =1;
        else
            arr[i]=0;


    }

    long long sum =0;
    bool chk=false;
    if(arr[0]==0)
       {

    sum+=v[0];
    chk=true;}
    //cout << arr[0] << endl;

    for(long long i=1;i<n;i++)
    {
       if(chk==true && arr[i]==1)
       {
           if((v[i])>sum)
            sum =0;
           else
            sum  -= v[i];
       }
       else if(v[i]>0 && arr[i]==0)
           {
            sum +=v[i];
            chk = true;}

    }

    cout << sum << endl;
    //cout << sum-v[0] << endl;
}
}
