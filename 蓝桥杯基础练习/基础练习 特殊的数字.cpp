#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,a,b,c;
	for(i=100;i<=999;i++)
	{
		n=i;
		a=n%10;
		b=n/10%10;
		c=n/100;
		if(i==(pow(a,3)+pow(b,3)+pow(c,3)))
			cout<<i<<endl;
	}
	return 0;
}
