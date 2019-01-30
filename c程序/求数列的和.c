#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i;
	double sum=0,result;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		result=n;
		for(i=m;i>0;i--)
		{   sum=sum+result;
			result=sqrt(result);
			
		} 
		printf("%.2f\n",sum);
		sum=0;
	}
	return 0;
 } 
