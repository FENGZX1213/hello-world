#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
bool palindrome( char *s )
{
	int i,j=0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	i--;
	for(;j<=i;i--,j++)
	{
		if(*(s+i)!=*(s+j))
		{
			break;
		}
	}
	if(j>i) return 1;
	else return 0;
} 
