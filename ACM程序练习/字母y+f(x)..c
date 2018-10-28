#include<stdio.h>
#include<ctype.h> 
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		char x;
		int y;
		getchar();
		scanf("%c %d",&x,&y);
		if(isupper(x)){
			printf("%d\n",y+(x-'A'+1));
		}
		else{
			printf("%d\n",y-(x-'a'+1));
		}
	}
	return 0;
 } 
