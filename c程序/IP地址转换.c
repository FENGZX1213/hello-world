#include<stdio.h>
int main()
{
	char str[100];
	int i,num=0,b=1,flag=1;
	float sum,a=1.0;
	for(i=0;(str[i]=getchar())!='\n';i++)
	{
		if(str[i]=='2')
		{
			num++;
		}
		if(str[i]=='-')
		{
			a=1.5;
			flag=0;
	    }
	}		
		if((str[i-1]-'0')%2==0)
		{
			b=2;
		}
		if((i==1)||flag==1)
		{
			i++;
		}
	sum=(float)num/(i-1)*a*b*100;
	printf("%.2f%%",sum);
}
