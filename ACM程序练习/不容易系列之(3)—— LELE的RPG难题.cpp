#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	long long a[51]={0,3,6,6};//数据太大，防止溢出 
	for(i=4;i<=50;i++)
	    a[i]=2*a[i-2]+a[i-1];
	while(scanf("%d", &n)!=EOF)
	{
			cout<<a[n]<<endl;
	}
	return 0;
 } 
