#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define pi acos(-1)
#define ll long long
#define ldb long double
#define pii pair< int , int >
#define pll pair< ll , ll >




using namespace std;

long long n,k;

struct node
{
    long long cnt;
    node *arr[2];
    node()
    {
        cnt =  0;
        for(int i=0;i<2;i++)
            arr[i] = NULL;
    }
};



struct node *root;


void add(int pre_xor)
{
    node *cur = root;

    for(int i=31;i>=0;i--)
    {
        int bit = (pre_xor & (1 << i)) ? 1 : 0;
        if(cur->arr[bit]==NULL)
            cur->arr[bit] = new node();
        cur = cur->arr[bit];
        cur->cnt++;

    }
}

int getCnt(node* cur) {
    return cur==0 ? cur->cnt : 0;
}



long long query(long pre_xor)
{
    long long ret =0;
    node *cur = root;
    for(int i=31;i>=0;i--)
    {
        if(cur == NULL)
            break;
        int bit_n = (pre_xor & (1 << i)) ? 1 : 0;
        int bit_K = (k & (1 << i)) ? 1 : 0;

        if(bit_n == bit_K)
        {
            if(!bit_K)
                ret += getCnt(cur->arr[0]);

            cur = cur->arr[1];
        }
         else if(bit_n != bit_K) {
            if(!bit_K)
                ret += getCnt(cur->arr[1]);
            cur = cur->arr[0];
        }

    }

    return ret;

}

void del(node *cur)
{
    for(int i=0;i<2;i++)
        if(cur->arr[i])
            del(cur->arr[i]);
    delete (cur);
}

int main()
{


{
    cin >> n >> k;
    root = new node();
    long long ans = 0;
    long long pre_xor =0;
    add(0);
    for(long long i=0;i<n;i++)
    {
        long long r;
        cin >> r;
        pre_xor ^= r;
        ans += query(pre_xor);
        add(pre_xor);
    }

    cout << ans << endl;
    //del(root);

}
}
