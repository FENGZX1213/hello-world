#include<stdio.h>
int main()
{
	int n,i,max,min;
	float ave,sum;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n];
	    for(i=0;i<n;i++)
		{
		   scanf("%d",&a[i]);	
		}	
		max=a[0];
		min=a[0];
		for(i=1;i<n;i++)
		{
			if(max<a[i]) max=a[i];
			else if(min>a[i]) min=a[i];
		}
		sum=0;
		for(i=0;i<n;i++)
		{
			if(a[i]!=max&&a[i]!=min)
			{
				sum=sum+a[i];
			}
		}
		ave=sum/(n-2);
		printf("%.2f\n",ave);
	}
 } 
