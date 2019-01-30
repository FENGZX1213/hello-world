#include<stdio.h>
int main()
{
	int n,i,j=0,result;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n];
		int *p;
		p=a;
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		    if(*(p+i)%2!=0)
		    {
		    	*(p+j)=*(p+i);
		    	j++;
			}
		}
		result=*p;
		for(i=1;i<j;i++)
		{
			result=result*(*(p+i));
		}
		printf("%d\n",result);
		j=0;	    
	}
	return 0;
}
