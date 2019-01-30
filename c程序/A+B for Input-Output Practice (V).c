#include<stdio.h>  
int main()  
{   
	int i,sum,n,number,k;
	sum=0;
	scanf("%d",&k);
	while(k!=0)
	{
		scanf("%d",&n);
			k--;
			for(i=0;i<n;i++)
			{
				scanf("%d",&number);
				sum=sum+number;
			}
			printf("%d\n\n",sum);	
			sum=0;	 
	}
}
