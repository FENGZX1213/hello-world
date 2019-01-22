#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1001];
int n,r;
int main()
{
	while(cin>>r>>n)
	{
		if(n==-1 && r==-1)
			break;
		int i,ans=0;
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		i=0;
		while(i<n)
		{
			int x=a[i++];
			while(i<n && a[i]<=x+r)
				i++;
			int y=a[i-1];
			while(i<n && a[i]<=y+r)
				i++;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
 } 
