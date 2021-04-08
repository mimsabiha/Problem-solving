#include<bits/stdc++.h>
using namespace std;
int main()

{
  	char str[1000];
  	int i, j;

  	//printf("\n Please Enter any String :  ");
  	gets(str);

  	int k = strlen(str);

  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i]){
					k--;
					break;

 			}
		}
	}
    if(k%2==0)
	printf("CHAT WITH HER!\n");
	else
        printf("IGNORE HIM!\n");

  	return 0;
}


