#include<stdio.h>  
int main()  
{   
	int i,sum,n,number,k,j;
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
			if(k!=0) printf("%d\n\n",sum);
			else printf("%d\n",sum);	
			sum=0;	 
	}
}
