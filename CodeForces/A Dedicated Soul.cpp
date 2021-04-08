#include<bits/stdc++.h>
#define pb push_back



using namespace std;

int main()
{

int t;
cin >> t;
while(t--)
{
    char a;
    int r;
    cin >> a >> r;
    if(a=='F')
    {
        if(r>40)
            cout << "Wow! It is a boundary." << endl;
        else
            cout << "Keep patience Captain." << endl;
    }
    else if(a=='B')
    {
        if(r>80)
            cout << "Wow! It is a boundary." << endl;
        else
            cout << "Keep patience Captain." << endl;
    }
     else if(a=='L')
    {
        if(r>60)
            cout << "Wow! It is a boundary." << endl;
        else
            cout << "Keep patience Captain." << endl;
    }
      else if(a=='R')
    {
        if(r>50)
            cout << "Wow! It is a boundary." << endl;
        else
            cout << "Keep patience Captain." << endl;
    }
}
}
