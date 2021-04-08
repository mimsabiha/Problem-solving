#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        if(n%2==0)
        {
            if(k%2==0 && k<=n)
                cout << 0 << endl;
            else if(k%2==1 && k<n)
                cout << 1 << endl;
            else if(k%2==0 && k>n)
                cout << k-n << endl;
            else if(k%2==1 && k>n)
                cout << (k-n) << endl;
        }
        else if(n%2==1)
        {


            if(k%2==1 && k<=n)
                cout << 0 << endl;
            else if(k%2==0 && k<n)
                cout << 1 << endl;
            else if(k%2==1 && k>n)
                cout << (k-n) << endl;
            else if(k%2==0 && k>n)
                cout << (k-n) << endl;

        }

    }
}
