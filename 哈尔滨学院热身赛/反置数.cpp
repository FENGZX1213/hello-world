#include<iostream>
using namespace std;
int back(int x)
{
	int y=0;
	while(x)
	{
		y=y*10+x%10;
		x/=10;
	}
	return y;
}
int main()
{
	
	int n,m,sum;
	cin>>n>>m;
	n=back(n),m=back(m);
	sum=n+m;
	cout<<back(sum)<<endl;
	return 0;
 } 
