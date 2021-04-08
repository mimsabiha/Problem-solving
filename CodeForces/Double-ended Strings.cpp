#include<bits/stdc++.h>
#include <iostream>

using namespace std;

char X[35], Y[35];


int LCSubStr(char* X, char* Y, int m, int n)
{


    int LCSuff[m + 1][n + 1];
    int result = 0;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}


int main()
{
    int t;
    cin >> t;
    while(t--){
	int n, m;


	cin >> X >> Y;



	m = strlen(X);
	n = strlen(Y);


	int ans =   LCSubStr(X,Y,m, n);
	int kp = (n-ans) + (m-ans);

	cout << kp << endl;

    }

	return 0;
}
