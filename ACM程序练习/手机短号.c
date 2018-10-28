#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	getchar();
	while(N--)
	{
		char num[12];
		char num1[7]={'6'};
		int i,k=1;
		gets(num);
		for(i=6;i<12;i++)
		{
			num1[k]=num[i];
			k++;
		}
		printf("%s\n",num1);
	}
	return 0;
}
