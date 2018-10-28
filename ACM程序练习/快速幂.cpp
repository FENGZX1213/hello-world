#include<iostream>
using namespace std;
int poww(int a,int b)
{
	int ans=1,base=a;
	while(b)
	{
		if(b%2)
			ans *= base;
			base *= base;
			b >>= 1;
	}
	return ans;
}
int main()
{
	int n,m,res;
	scanf("%d %d",&n,&m);
	res=poww(n,m);
	cout<<res<<endl;
	return 0;
 } 
