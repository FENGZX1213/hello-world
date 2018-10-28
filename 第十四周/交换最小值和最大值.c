#include<stdio.h>
int main()
{
	int i, index=0,flag=0,n;
	int tmp;
	scanf("%d", &n);
    int a[n];    
    for(i = 0; i < n; i++)
    {
    	scanf("%d", &a[i]);
	}
    for(i = 1; i < n; i++) 
	{
		if(a[i] < a[index])  index = i;
	}       
    if( index != 0)
	{
		tmp = a[0]; a[0] = a[index]; a[index] = tmp;			
	}
	for(i = 1; i < n; i++) 
	{
		if(a[i]>a[flag]) flag=i;
	}
	if(flag!=0)
	{
		tmp=a[n-1];a[n-1]=a[flag];a[flag]=tmp;
	}
	for(i = 0; i < n; i++)
	{
        printf("%d ", a[i]);	
	}
}