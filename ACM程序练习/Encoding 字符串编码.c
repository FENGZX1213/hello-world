#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s",a);
		int num=1;
		int i;
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==a[i+1])
				num++;
			else
			{
				if(num==1)
					printf("%c",a[i]);	
				else
				{
					printf("%d%c",num,a[i]);
					num=1;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
