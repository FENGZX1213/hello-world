#include<stdio.h>
#define N 10
int fun(int *a,int *b,int n);
int main()
{ int a[N],i,max,p=0;
for(i=0;i<N;i++) scanf("%d",&a[i]);
 max=fun(a,&p,N);
 printf("max=%d,position=%d\n",max,p);
 return 0;
}
int fun(int *a,int *b,int n)
{
	int j,MAX,*c;
	MAX=a[0];
	*a=a[0];
	for(j=0;j<n;j++)
	{
		if(MAX<a[j])
		{
			*a=MAX;
			MAX=a[j];
			*b=j;
		}
	}
	return MAX;
}
