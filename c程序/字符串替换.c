#include<stdio.h>
#include<math.h>
int main()
{
	char str[33];
	int i,k=7,sum=0,x;
	for(i=0;(str[i]=getchar())!='\n';i++,k--)
	{
		x=pow(2,k);
		sum=sum+(str[i]-'0')*x;
		if((i+1)%8==0)
		{
			k=8;
			if((i+1)==8)
			{
				printf("%d",sum);
			}
			else
			{
				printf(".%d",sum);
			}
			sum=0;
		}
	}		
		
}
