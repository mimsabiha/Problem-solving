#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char arr[100002];
        int n;
        cin >> n;

        vector < int > ok;
        scanf("%s",arr);
         bool chk1 = false ,chk2= false;
        int cnt1=0,cnt2=0,numz=0,numo=0;
        arr[n] = '3';

        for(int i=0;i<n;i++)
        {
            if(arr[i]=='0')
                numz++;
            else
                numo++;
        }

       for(int i=0;i<n;i++)
       {
           if(arr[i]=='0')
           {
               if(chk1==true &&  numz==1 && (arr[i+1]=='1' || arr[i+1]=='3'))
                {ok.push_back(0);
                chk1 = false;
                cnt1 =0;
                //numz--;
                }
               else if(chk1==false)
               {
                   ok.push_back(0);
                   numz--;
               }
               else
                numz--;
           }
           else if(arr[i]=='1')
           {
               cnt1++;
               chk1 = true;
               if(arr[i]=='1' && arr[i+1]=='3')
                chk2 = true;
           }
       }

       if(chk2==true)
       {
           while(cnt1!=0)
           {
               ok.push_back(1);
               cnt1--;
           }
       }

       cnt1 = 0;

       for(int i=0;i<ok.size();i++)
        cout << ok[i];
       cout << endl;


    }
}
