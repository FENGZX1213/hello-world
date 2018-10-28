#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	char str[N];
	int i,index;
	while(scanf("%s",str)!=EOF)
	{
		char max;
		max=str[0];
		for(i=0;str[i]!='\0';i++)
		{
			if(max<str[i])
			{
				max=str[i];
				index=i;
			}
		}
		for(i=0;str[i]!='\0';i++)
		{
			printf("%c",str[i]);
			if(str[i]==max)
			printf("(max)");
		}
		printf("\n"); 
	}
	return 0;
}
