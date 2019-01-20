#include<iostream>
#include<cstring>
using namespace std;
char s[2100];
int n;
void solve()
{
	
	
	int a=0,b=n-1,count=0;
	while(a<=b)
	{
		bool left=false;
		for(int i=0;a+i<=b;i++)
		{
			if(s[a+i]<s[b-i])
			{
				left=true;
				count++;
				break;
			}
			else if(s[a+i]>s[b-i])
			{
				left=false;
				count++;
				break;
			}
		}
		if(left)
			cout<<s[a++];
		else
			cout<<s[b--];
		if(count%80==0)
			cout<<endl;
	}
	cout<<endl;
}
int main()
{
	while(cin>>n)
	{
		memset(s,0,sizeof(s));
		for(int i=0;i<n;i++)
			cin>>s[i];
		solve();
	}
	return 0;
} 
