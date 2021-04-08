#include<bits/stdc++.h>

using namespace std;

long long arr[500008];

void calc()
{
   arr[0] = 0 ;
   for(long long i=3;i<=500003;i+=2)
   {
       arr[i] += 1 + arr[i-2];
   }
}

int main()
{
    calc();
    //cout << arr[5] << endl;
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n;
        long long p = arr[n];
        //cout << p << endl;
        long long sum =0;
        for(long long i=1;i<=p;i++)
        {//cout << sum << endl;
            sum +=   8*i*i;}

        cout << sum << endl;
    }
}
