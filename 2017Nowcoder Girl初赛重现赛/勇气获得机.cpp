#include<iostream>
using namespace std;
char str[20000];
int main()
{
	int n,ans=0;
	cin>>n;
	while(n)
	{
		if(n%2==0)
		{
			str[ans++]='G';
			n/=2;
			n--;
		}
		else
		{
			str[ans++]='N';
			n/=2;
		}
	}
	for(int i=ans-1;i>=0;i--)
		cout<<str[i];
	return 0;
 } 
