#include<stdio.h>
int main()
{
	int n;
	int i=0,count1=0,count2=0,count3=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		double a[n];
		double *p;
		p=a;
		for(i=0;i<n;i++)
		{
			scanf("%lf",p+i);
			if(*(p+i)<0) count1++;
			else if(*(p+i)>0)  count2++;
			else count3++;
		}
		printf("%d %d %d\n",count1,count3,count2);
		count1=0;
		count2=0;
		count3=0;
	}
	return 0; 
}
