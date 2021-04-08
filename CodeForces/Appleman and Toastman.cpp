#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{
 long long n;
 vector<long long >v;
 unordered_set<long long > s;
 cin >> n;
 long long sum=0;
 long long score=0;
 for(int i=0;i<n;i++)
 {
     long long p;
     cin >> p;
     v.pb(p);
     s.insert(p);
     sum+=p;
 }
 score = sum;
 long long k=0;
 sort(v.begin(),v.end());
 while(k<(n-2))
 {
    long long a=v[k];
    score+=a;
    sum -=a;
    score += sum;
    k++;

 }



 if(n>=3)
    score += (v[n-1]+v[n-2]);
 else if(n==2)
    score *=2;


 cout << score << endl;

}
