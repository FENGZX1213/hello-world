#include<stdio.h>
int main()
{
	int year,i,flag=0;
	scanf("%d",&year);
	if(year<2001||year>2100)
		{
			printf("Invalid year!");
		}
	else
	{
	for(i=2001;i<=year;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{   if((i+4)>year)
		{
			printf("%d",i);
		}else printf("%d\n",i);	
				flag=1;
		}
	}   
	
	   if(flag==0)
		{
			printf("None");
		}
 } 
 }
