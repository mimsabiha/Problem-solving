#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define sz (1<<17)
#define pb(a) push_back(a)
#define pp pop_back()
#define ll long long
#define inf (1<<30-1)
#define clr(abc,z) memset(abc,z,sizeof(abc))
#define PI acos(-1)
using namespace std;

int arr[sz];
ll st[sz*4];

ll build(ll nd, ll sp, ll ed, bool flag)
{
    if(sp==ed) return st[nd] = arr[sp];

    ll mid = ((sp+ed)/2);
    ll left = nd*2;
    ll right = nd*2+1;

    ll a = build(left, sp, mid, !flag);
    ll b = build(right, mid+1, ed, !flag);

    if (flag) return st[nd] = a|b;
    else return st[nd] = a^b;
}

ll up(ll nd, ll sp, ll ed,ll i, ll val, bool flag)
{
    if(sp==ed) return st[nd] = val;

    ll mid = ((sp+ed)/2);
    ll left = nd*2;
    ll right = nd*2+1;
    ll a, b;

    if(i<=mid)
    {
        a = up(left , sp, mid, i, val,!flag);
        b = st[right];
    }
    else
    {
        a = up(right, mid+1, ed, i, val, !flag);
        b = st[left];
    }

    if (flag) return st[nd] = a|b;
    else return st[nd] = a^b;
}

int main()
{
    int t, indx, val,n,q;

    while(scanf("%d %d", &n, &q) ==2)
    {
        t = (1<<n);
        for (int i = 1; i<=t; i++)
            scanf("%d", &arr[i]);

        if(n%2) build(1, 1, t, true);
        else build(1, 1, t, false);

        while(q--)
        {
            scanf("%d %d", &indx, &val);
            ll ans;
            if(n%2) ans = up(1, 1, t, indx, val, true);
            else ans = up(1, 1, t, indx, val, false);
            printf("%lld\n", ans);
        }
    }

    return 0;
}
