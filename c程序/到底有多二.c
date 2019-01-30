#include<stdio.h>
int main()
{
	int i,j;
	char str[21],c;
    gets(str);
    c=getchar();
	for(i=0,j=0;str[i]!='\0';i++)
	{
		if(str[i]!=c)
		{
			str[j]=str[i];
			j++;
		}		
	}str[j]='\0';
		printf("%s",str);
}
