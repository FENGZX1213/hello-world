#include<stdio.h>
int main()
{
	int A,B,i,j;
	int sum=0;
	scanf("%d %d",&A,&B);
	for(i=A,j=1;i<=B;i++,j++)
	{
		if(j%5==0||i==B)
		printf("%5d\n",i);
		else printf("%5d",i);
		sum=sum+i;
	}
	printf("Sum = %d",sum);
 } 
