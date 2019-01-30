#include<stdio.h>
int main()
{
	int N,i,sum=1,result;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum=sum*i;
		result=result+sum;
	}
	printf("%d",result);
	
} 
