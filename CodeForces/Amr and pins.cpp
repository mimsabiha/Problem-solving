#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long r,x,y,x1,y1;
    cin >> r >> x >> y >> x1 >> y1;
    long long p = (x-x1)*(x-x1)  + (y-y1)*(y-y1);
    long long ans = (ceil) (sqrt(p)/(2.0*r));
    cout << ans << endl;
}
