#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second




using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[100002];
    scanf("%s",str);
    int chk=0,nub=0,chk1=0,chk2=0,nur=0;
    char a=str[0];
    for(int i=0;str[i]!=NULL;i++)
    {
        if(i%2==0 && str[i]!='r')
            chk++;
        else if(i%2 && str[i]!='b')
            chk2++;

         if(i%2==0 && str[i]!='b')
            chk1++;
        else if(i%2 && str[i]!='r')
            nub++;





    }

    int r = min(max(chk,chk2),max(chk1,nub));

    cout << r << endl;





}
