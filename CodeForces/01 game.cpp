#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char str[200];
        scanf("%s",str);
        int r = strlen(str);
        int numz=0,numo=0;

        for(int i=0;i<r;i++)
        {
            if(str[i]=='0')
                numz++;
            else
                numo++;

        }
        int p = min(numz,numo);
        if(p%2)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;


    }
}
