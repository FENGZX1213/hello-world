#include<stdio.h>
int main()
{
	int N;
	int i;
	scanf("%d",&N);
	int f[50]={1,1};
	for(i=2;i<50;i++)
	f[i]=f[i-1]+f[i-2];
	for(i=0;i<50;i++)
	{
		if(i==N)
		{
		printf("%d",f[i-1]);
		break;	
		}
	}
	return 0;
 } 
