#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,i,n,result=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=pow(2,i);
		result=result+sum;
	}
	printf("result = %d",result);
}
