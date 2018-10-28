#include<stdio.h>
void input(int *arr,int n);
void max_min(int *arr,int n);
void output(int *arr,int n);
int main()
{ int a[10];
input(a,10);
 max_min(a,10);
 output(a,10);
 return 0;
}
void input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr++);
	}
}
void max_min(int *arr,int n)
{
	int j,index=0,t,flag=0;
	for(j=1;j<n;j++)
	{
		if(*(arr+j)<*(arr+index))  index=j;
		
	}
			if(index!=0)
	{
		t=*arr;*arr=*(arr+index);*(arr+index)=t;
	}
			for(j=1;j<n;j++)
	{
		if(*(arr+j)>*(arr+flag))  flag=j;
		
	}
	if(flag!=0)
	{
		t=*(arr+n-1);*(arr+n-1)=*(arr+flag);*(arr+flag)=t;
	}
	
}
void output(int *arr,int n)
{
	int k;
	for(k=0;k<n;k++,arr++)
	{
		printf("%3d",*arr);
	}
}
