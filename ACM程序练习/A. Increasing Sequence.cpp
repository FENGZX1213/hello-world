#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,d,count=0,t;
	int b[10000];
	cin>>n>>d;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>b[i]; 
	}
	for(i=1;i<n;i++)
	{
		if(b[i-1]>=b[i]) 
		{
			t=(b[i-1]-b[i]+d)/d;
			b[i]=b[i]+t*d;
			count=count+t;
		}
	}
	cout<<count<<endl;
	return 0;
}
