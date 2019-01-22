#include<iostream>
using namespace std;
int d[5]={1,5,10,20,100};
int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=4;i>=0;i--)
	{
		int t=n/d[i];
		n=n-t*d[i];
		ans+=t;		
	}
	cout<<ans<<endl;
	return 0;
}
