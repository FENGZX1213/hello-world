#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[22];
	char ch;
	int i,len;
	cin>>str;
	cin>>ch;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==ch)
			continue;
		else
			cout<<str[i];
	}
	return 0;
}
