#include<stdio.h>
int main()
{
		int N,i;
		double sum=0.0,x,a=2.0,b=1.0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
		    sum=sum+a/b;
		    a=a+b;
			b=a-b;
		} 
		printf("%.2f",sum);
 } 
