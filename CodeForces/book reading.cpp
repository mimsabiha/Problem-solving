#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    vector< int > p(10);
    long long n,m,sum=0,k=0,l,a,b,c,d;
    cin >> n >> m;
    for(int i=1;i<=10;i++)
    {
        a = (i*m)%10;

        p[i] = a;
    }

   b = accumulate(p.begin(),p.end(),0LL);

    k = (floor(n/(10*m)));
   l = (n-(m*10*k));
   c = l/m;
   //cout << c << endl;
   d = accumulate(p.begin(),p.begin()+c+1,0LL);
   //cout << d << endl;

   cout << (b*k)+d << endl;


    }
}
