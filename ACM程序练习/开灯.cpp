#include<stdio.h>
#include<string.h>
#define max 1000
int a[max];
int main()
{
	
	int i,j,k,n,count=0;
	memset(a,0,sizeof(a));
	scanf("%d %d", &n,&k);
	for(i=1;i<=k;i++)
		for(j=1;j<=n;j++)
			if(j%i==0)
				a[j]=!a[j];
	for(i=1;i<=n;i++){
		if(a[i]){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
