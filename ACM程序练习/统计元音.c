#include<stdio.h>
#define N 100
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char str[N];
		gets(str);
		int j,a,e,i,o,u;
		j=a=e=i=o=u=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]=='a') a++;
			else if(str[j]=='e') e++;
			else if(str[j]=='i') i++;
			else if(str[j]=='o') o++;
			else if(str[j]=='u') u++;
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
		if(n!=0) printf("\n"); 
	}
	return 0;
}
