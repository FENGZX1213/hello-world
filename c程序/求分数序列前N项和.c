#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,i,sum=0,j,x;
	scanf("%d %d",&a,&n);
	for(i=n;i>=0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
		x=pow(10,j);
		sum=sum+a*x;
	    }
	}
	printf("s = %d",sum);
} 
