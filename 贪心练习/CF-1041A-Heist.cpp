#include<iostream>
#include<algorithm>
using namespace std;
int a[1001];
int main()
{
	int n,x,i,ans=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	x=a[0]+1;
	for(i=1;i<n;x++)
	{
		if(x!=a[i])
			ans++;
		else
			i++; 	
	}
	cout<<ans<<endl;
	return 0;
}
