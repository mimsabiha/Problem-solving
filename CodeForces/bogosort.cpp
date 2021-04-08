#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[109];
        int n;

        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i] ;
        }
        //int k= n+1;
        sort(arr,arr+n);
        for(int i=n-1;i>=0;i--)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
}
