#include<bits/stdc++.h>

using namespace std;

int main()
{
    //int y=0;

    string s;
    cin >> s;
    vector< int > v;
    set < int > p;

    for(auto a : s)
    {
        int k = a - 'a';
       p.insert(k);
    }

    int y = p.size();
    cout << 26-y << endl;



}
