#include<stdio.h>
int main()
{
	int n,i,m;
	double sum,a=1,x=1;
	while(scanf("%d",&m)!=EOF)
	{ 
	 	while(m>0)
	 	{
	 	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			sum=sum+a/x;
			a=-a;
			x++;
		}
		printf("%.2f\n",sum);
		sum=0;
		x=1;
		m--;
		a=1;	
		 }
		
   }
	return 0;
} 
