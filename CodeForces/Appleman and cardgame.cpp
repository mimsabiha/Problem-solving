#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
long long  str[26];

int  main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        char p;
        cin >> p;
        int s = p - 'A';
        str[s]++;
    }
    long long ans = 0L;
    sort(str,str+26);
    reverse(str,str+26);
    //cout << str[0] << "\n" << str[1] << "\n" << str[2] << str[3]<< endl;

    for(int i=0;i<26;i++)
    {
        if(str[i]==0 || k==0)
            break;
        if(str[i]<k)
        {
            k = k - str[i];
            ans += (str[i] * str[i]);
            continue;


        }
        if(k<=str[i])
        {


            ans +=  (1ll*k*k);
            k -=k;
        }
    }

    cout << ans << endl;
}
