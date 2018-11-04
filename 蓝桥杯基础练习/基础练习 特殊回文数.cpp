#include<iostream>
using namespace std;
int main()
{
	int i,n,t;
	int a,b,c,d,e,f;
	cin>>n; 
	for(i=10000;i<=999999;i++)
	{
		t=i;
		if(i<=99999)
		{
			a=t%10;
			b=t/10%10;
			c=t/100%10;
			d=t/1000%10;
			e=t/10000;
			if(a==e && b==d)
				if((a+b+c+d+e)==n)
					cout<<i<<endl;
		}
		else
		{
			a=t%10;
			b=t/10%10;
			c=t/100%10;
			d=t/1000%10;
			e=t/10000%10;
			f=t/100000;
			if(a==f && b==e && d==c)
				if((a+b+c+d+e+f)==n)
					cout<<i<<endl;
		}
	}
	return 0;
}
