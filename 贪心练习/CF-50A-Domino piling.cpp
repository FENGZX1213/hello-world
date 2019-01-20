#include<iostream>
using namespace std;
int a[257];
int main()
{
	int n,m,num=1;
	cin>>n>>m;
	for(int i=2;i<=256;i+=2)
	{
		a[i]=num;
		a[i+1]=num;
		num++;
	}
	cout<<a[n*m]<<endl;
	return 0;
}
