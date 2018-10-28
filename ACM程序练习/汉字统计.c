#include<stdio.h>
#include<ctype.h>
#define max 10000
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		char s[max];
		getchar();
		gets(s);
		int i;
		int count=0;
		for(i=0;s[i]!='\0';i++){
			if(s[i]<0){
				count++;
				i++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
 } 
