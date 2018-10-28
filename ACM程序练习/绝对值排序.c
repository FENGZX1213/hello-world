#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k,t;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
           k=i; 
        for(j=i+1;j<n;j++)
		{
			if(abs(a[j])>abs(a[k]))  
                k=j;  
		}      
        if(k!=i)  
        {  
            t=a[i];  
            a[i]=a[k];  
            a[k]=t;  
        } 
		}
		for(i=0;i<n;i++)
		{
			if(i==0)
			printf("%d",a[i]);
			else printf(" %d",a[i]);
		}
		printf("\n");
	}
 } 
