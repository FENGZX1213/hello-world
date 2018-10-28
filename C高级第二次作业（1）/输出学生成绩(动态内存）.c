#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i;
	double max,min,sum=0;
	scanf("%d",&n);
	if((a=(int *)malloc(n*sizeof(int)))==NULL)
    exit(1);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum=sum+*(a+i);
	}
	max=*a;min=*a;
	for(i=0;i<n;i++)
	{
		if(*(a+i)<min)
		min=*(a+i);
		if(*(a+i)>max)
		max=*(a+i);
	}
	printf("average = %.2f\nmax = %.2f\nmin = %.2f",sum/n,max,min);
	free(a);
	return 0;
}
