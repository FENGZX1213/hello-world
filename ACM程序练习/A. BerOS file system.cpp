#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[110];
	int len,i,j;
	cin>>a;
	len=strlen(a);
	for(i=1,j=0;i<len;i++)
	{
		if(a[j]!='/'||a[i]!='/')
		{
			a[++j]=a[i];
		}
	}
	while(j>0&&a[j]=='/')
	{
		j--;
	}
	a[j+1]='\0';
	for(i=0;a[i]!='\0';i++)
		cout<<a[i];
		cout<<endl;
	return 0;
}
