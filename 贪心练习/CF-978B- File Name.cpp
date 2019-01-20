#include<iostream>
using namespace std;
char s[110];
int main()
{
	int n,count=0;
	cin>>n;
	cin>>s;
	for(int i=0;i<n-2;i++)
	{
		if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
			count++;
	}
	cout<<count<<endl;
	return 0;
}
