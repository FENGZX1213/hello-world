#include<iostream>
#include<algorithm>
using namespace std;
int a[110];
int main()
{
	int n,m,i,bt,ans=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	i=n-1;
	while(m>0)
	{
		m=m-a[i--];
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
