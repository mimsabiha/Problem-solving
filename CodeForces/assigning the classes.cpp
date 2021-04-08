#include<bits/stdc++.h>

using namespace std;

int arr[200009];

int main()
{
    int t;
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        int k= 2*n;
        for(int i=0;i<k;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+k);

        int p = arr[n] - arr[n-1];

        cout << p << endl;
    }

    return 0;
}
