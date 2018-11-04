#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b,c,d;
	for(i=1000;i<=9999;i++)
	{
		n=i;
		a=n%10;
		b=n/10%10;
		c=n/100%10;
		d=n/1000;
		if(a==d && c==b)
			cout<<i<<endl;
	}
	return 0;
}
