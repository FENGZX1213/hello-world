#include<iostream>
#include<algorithm>
using namespace std;
int a[10010];
int main()
{
	int n,i,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];	
	}
	sort(a,a+n);
	cout<<a[n-1]<<endl<<a[0]<<endl<<sum<<endl;
	return 0;
}
