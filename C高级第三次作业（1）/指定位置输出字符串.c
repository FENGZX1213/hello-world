#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}
char *match( char *s, char ch1, char ch2 )
{
	int i,j,k,flag=0,index=0;
	char *a;
	a=s;
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)==ch1)
		{
			index=i;
			for(j=i;*(s+j)!='\0';j++)
			{
			if(*(s+j)==ch2)
			{
		    	flag=1;
		    	for(;i<=j;i++)
		    	printf("%c",*(s+i));	
			}
			}
			if(flag==0)
			{
				
				flag=2;
				for(;*(s+i)!='\0';i++) 
				printf("%c",*(s+i));
			}
	 	} 
	} 
	if(flag==0)
		 {
		 	printf("\n");
		 	a="\0";
		  }
	if(flag!=0)
	{
		printf("\n");
		for(k=0;*(s+index)!='\0';index++,k++)
		  	*(a+k)=*(s+index);
		  	*(a+k)='\0';
	} 
	return a;
}
