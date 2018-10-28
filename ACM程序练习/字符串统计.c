#include<stdio.h>
int main()
{
	char str[100000];
	int n,i,count=0;
	scanf("%d",&n);
	gets(str);
	while(n)
	{
		gets(str);
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				count++;
			}
		}
		printf("%d\n",count);
		count=0;
		n--;
	}
}
