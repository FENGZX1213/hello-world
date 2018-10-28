#include<stdio.h>
#include<string.h>
#define max 10000
int main()
{
	int n;
	scanf("%d",&n);
	while(n){
		char s[max]={"0"};
		int i=0,j=0;
		scanf("%s",s);
		while(s[i]!='\0'){
			i++;
		}
		i--;
		for(;j<=i;i--,j++){
			if(s[i]!=s[j]){
				break;
			}
		}
		if(j>i) printf("yes\n");
		else printf("no\n");
		n--;
	}
	return 0;
 } 
