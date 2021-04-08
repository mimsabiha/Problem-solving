#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector < long long > v;
    for(int i=0;i<n;i++)
    {
        long long p;
        cin >> p;
        v.push_back(p);
    }
    for(int i=0;i<k;i++)
    {
        long long p;
        cin >> p;
        long long l = 0;
        long long h = n-1;
        bool chk = false;
        while(l<=h)
        {
            long long mid = (l+h)/2;
            if(v[mid]==p)
                {
                    chk=true;
                    break;
                }
            else if(p<v[mid])h=mid-1;
            else l=mid+1;
        }
        if(chk)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
