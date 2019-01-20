#include<iostream>
using namespace std;
int main()
{
	int k,n=0,a;
	cin>>k;
	while(k--)
	{
		cin>>a;
		n=max(n,a);
	}
	cout<<max(n-25,0);
 } 
