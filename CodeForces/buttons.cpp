#include<bits/stdc++.h>

using namespace std;
int arr[2001];

int main()
{
    //int arr[2001];
    arr[1]=1;
     int n;
    cin >> n;
    int k=1;
    for(int i=2;i<=n;i++)
    {
        arr[i] += arr[i-1] + (i-1);
        k += arr[i];

    }
    cout << k << endl;
}
