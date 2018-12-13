#include<iostream>
#include<algorithm>
using namespace std;
int a[11];
int main()
{
	int n,s,ans=0,k=0,sum=0;
	cin>>n>>s;
	for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);//从小到大排序 
	while(k<n && sum<s)
	{
		sum+=a[k];
		k++;
		ans++;
		for(int i=k;i>=1;i--)
		{
			if(sum-a[i-1]>=s)
			{
				sum-=a[i-1];
				ans--;
			}
		}
	}
	cout<<ans;
	return 0;
}
