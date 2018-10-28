#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
#define max 50
int main()
{
	int m;
	char str[max];
	cin>>m;
	getchar();
	while(m--)
	{
		int len,i;
		int flag1,flag2,flag3,flag4;
		flag1=flag2=flag3=flag4=0;
		gets(str);
		len=strlen(str);
		if(len>=8&&len<=16){
		   for(i=0;i<len;i++){ 
		   		if(isupper(str[i]))  
		   		flag1=1;
		   		if(islower(str[i]))
		   		flag2=1;
		        if(isdigit(str[i]))  
				flag3=1;
			    if(str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^')           
				flag4=1;
		   }
		   if((flag1+flag2+flag3+flag4)>=3) 
		   	cout<<"YES"<<endl; 
		   else
		   	cout<<"NO"<<endl;
		}
		else 
		    cout<<"NO"<<endl;
	}
	return 0;
 } 
