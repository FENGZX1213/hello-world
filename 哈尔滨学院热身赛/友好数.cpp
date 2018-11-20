#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int i,sum1=0,sum2=0;
	cin>>x>>y;
	if(x==y)
	{
		cout<<"yes"<<endl;	
	}
	else
	{
		for(i=1;i<x;i++)
	{
		if(x%i==0)
			sum1+=i;
	}
	for(i=1;i<y;i++)
	{
		if(y%i==0)
			sum2+=i;
	}
	if(sum1==y && sum2==x)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	}
	
	return 0;
}
