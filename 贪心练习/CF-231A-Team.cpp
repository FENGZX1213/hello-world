#include<iostream>
#include<cstring>
using namespace std;
int a[1010];
int b[1010];
int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		memset(a,0,sizeof(a));
		for(int i=1;i<=3;i++)
		{
			cin>>a[i];
		}
		if(a[1] && a[2] || a[2]&&a[3] || a[1]&&a[3])
			ans++;
	}
	cout<<ans<<endl;
	return 0;
 } 
