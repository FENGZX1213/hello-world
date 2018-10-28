#include<stdio.h>
int main()
{
	int n;
	char str[1000];
	scanf("%d",&n);
	int f[1000]={1,1};
	int i;
	int j;
	int count=1;
	int flag=0; 
	for(i=2;i<=n;i++)
		f[i]=f[i-2]+f[i-1];
	for(i=0,j=1;i<n;i++,count++,j++)
	{
			if(count==f[j])
		{
			str[i]='O';
			flag=1;
		}
		else if(count!=f[j])
		{   if(flag==1)
		{
			str[i]='o';
			j--;
		}
		}
	}
		str[i]='\0';
		puts(str);
	return 0;
}
