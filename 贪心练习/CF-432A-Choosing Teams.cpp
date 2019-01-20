#include<iostream>
using namespace std;
int main()
{
	int n,k,a,ans=0;
	cin>>n>>k;
	while(n--)
	{
		cin>>a;
		if(5-a<=k)
			ans++;
	}
	cout<<ans/3<<endl;
	return 0;
 } 
