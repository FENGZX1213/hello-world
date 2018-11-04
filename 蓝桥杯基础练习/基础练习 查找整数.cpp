#include<iostream>
using namespace std;
int a[1001];
int main()
{
	int n,i,m;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			cout<<i+1;
			break;
		}
	}
	if(i==n) cout<<-1;
	return 0;
}
