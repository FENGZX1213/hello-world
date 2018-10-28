#include<stdio.h>
int main()
{
	int n,m,i,k;
	int number=2;
	int num[100];
	int flag;
	for(i=0;i<100;i++)
	{
		num[i]=number;
		number=number+2;
	}
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int result;
		result=0;
		flag=0;
		k=0;
		for(i=0;;i++)
		{
			if(k!=m)
			{
			   result=result+num[i];
			   k++;	
			}
			else 
			{
			  result=result/m;
			  if(i==m)
			  {
			  	if(i==n)
			  	{
			  	printf("%d\n",result);
			  	break;
				}
			    else printf("%d",result);
			  }
			  else
			  {
			  	if(i==n) printf(" %d\n",result);
				  else printf(" %d",result);	  
			  }
			 if((n-i)<m) 
			 {
			 	flag=i;
			    break;
			 }
			  else
			  {
			  	result=0;
				k=0;
				i--;
			  }		
			}
		}
		result=0;
		if(i!=n)
		{
		   for(;i<n;i++)
		{
			result=result+num[flag];
		}
		 printf(" %d",result/(n-flag)); 
		printf("\n");
		}
	}
	return 0;
}
