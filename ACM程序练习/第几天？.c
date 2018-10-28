#include<stdio.h>
int main()
{
	int y,m,d;
	int i;
	int month,mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day;
	int flag=0;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
	{
		month=0;
		if((y%4==0&&y%100!=0)||(y%400==0))
		{
			for(i=0;i<m-1;i++)
			{
				if(m==1)
				{
					month=d;
					flag=1;
					break;
				}
			if(i==1) mon[1]=29;
			month=month+mon[i];	
			}	
		}
		else 
		{
			for(i=0;i<m-1;i++)
			{
			if(m==1)
			{
				month=d;
				flag=1;
				break;
			}
		   if(i==1) mon[1]=28;
			month=month+mon[i];	
			}
		}
		if(flag==1) day=month;
		else
		day=month+d;
		printf("%d\n",day);
		flag=0;
	}
	return 0;
 } 
