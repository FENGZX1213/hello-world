#include <stdio.h>
int fun(char *s,int num);
int main()
{
 char s[10];
 gets(s);
 fun(s,7);
 printf("%s",s);
 return 0;
 }
int fun(char *s,int num)
{
	int i,j;
	char t;
	for(i=1;i<num-1;i++)
	{
		for(j=1;j<num-2;j++)
		{
		  if(*(s+i)>*(s+j))
		  {
		  	t=*(s+j);
		  	*(s+j)=*(s+i);
		  	*(s+i)=t;
		  }
		}
	
	 } 
} 
