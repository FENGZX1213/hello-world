#include<iostream>
using namespace std;
int a[110];
int main()
{
	int n,i;
	int b=0,c=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
			b+=a[i];
		else
			c+=a[i];
	}
	cout<<b-c<<endl;
	return 0;
}
