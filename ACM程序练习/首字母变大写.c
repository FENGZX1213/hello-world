#include<stdio.h>
#include<ctype.h>
void main()
{	
	char str[100],*p;
	while(gets(str)!=NULL)
	{	p=str;
		*p=toupper(*p);
		for(p=str+1;*p!='\0';p++)
		{	
			if(*(p-1)==' ')	
			{	
				*p=toupper(*p);
			}
		}
                printf("%s\n",str);
	}
	return 0;
}
