#include<iostream>
using namespace std;
int a[100001];
int main()
{
	int n,ans=1,maxx=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
			ans++;
		else
		{
			maxx=max(maxx,ans);
			ans=1;
		}
	}
	cout<<max(maxx,ans)<<endl;
	return 0;
}
