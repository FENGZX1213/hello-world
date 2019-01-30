#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}
void ReadString( char s[] )
{
	gets(s);
} 
void strmcpy( char *t, int m, char *s )
{
	int i,j=0;
	while(*(t+i)!='\0')
	{
		i++;
	}
	i--;
	if((i+1)<m) *s='\0';
	else
	{
		for(i=(m-1),j=0;*(t+i)!='\0';i++,j++)
		{
			*(s+j)=*(t+i);
		}
	}
	*(s+j)='\0';		
}
