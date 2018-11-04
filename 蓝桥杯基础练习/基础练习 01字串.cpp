#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
	int i,len,j;
	char str[6];
	for(i=0;i<=31;i++)
	{
		itoa(i,str,2);
		len=strlen(str);
		for(j=1;j<=5-len;j++)
		{
			cout<<0;
		}
		cout<<str<<endl;	
	}
	return 0;
}
