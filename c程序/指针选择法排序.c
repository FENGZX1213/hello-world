#include<stdio.h>
void sort(int *x,int n);
int main ( )
{int *p,i,a[10];
 p=a;
 for (i=0;i<10;i++)  scanf("%d",p++);
 p=a;
 sort(a,10);
 for(i=0;i<10;i++)  printf("%4d",*p++);
 printf("\n");
 return 0;
 }
void sort(int *x,int n)
{
	int i,t,k,j;
	for(i=0;i<(n-1);i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(*(x+j)>*(x+k))
			{
				k=j;
			}
		}
		if(i!=k)
		{
			t=*(x+i); *(x+i)=*(x+k); *(x+k)=t;
		}
	 } 
} 
