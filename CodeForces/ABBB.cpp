#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
cin >> t;
while(t--)
{
    string s;
    cin >> s;
    string pt1 ="AB";
    string pt2 = "BB";


    int a;
    int l=2;
    while(true)
    {
        a=s.find(pt1);
        if(a==-1)
        {break;}
        else
        {
        s.erase(a,l);
        }
    }
     while(true)
    {
        a=s.find(pt2);
        if(a==-1)
        {break;}
        else
        {
        s.erase(a,l);
        }
    }



    int k = s.size();
    cout << k << endl;
}
}
