#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,p=0;
        cin >> n;
        vector < int > arr;
        int brr[200];
        memset(brr,0,sizeof brr);
        for(int i=0;i<n;i++)
        {
            int b;
            cin >> b;
            arr.push_back(b);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k =arr[i]+arr[j];
                p = max(p,k);
              if(brr[k]==0)
                    brr[k]++;
            }
        }
        int r = -1;
        for(int i=0;i<=p;i++)
        {
            if(brr[i]>r)
                r= brr[i];
        }
        cout << r << endl;

    }
}
