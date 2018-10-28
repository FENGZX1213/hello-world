#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		a[i]=a[i+1]-a[i];
		
		if(i%3!=0)
		{
         printf(" %d",a[i]);
		}
		else printf("%d",a[i]);
	     if((i+1)%3==0)
		{
			if((i+2)!=n)
		   printf("\n");
		}
	}
 } 