#include<stdio.h>
#include<ctype.h>
#define N 55
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int i;
	while(n)
	{   char str[N];
   	    gets(str); 
		int flag=1;
		int a[55];
		for(i=0;str[i]!='\0';i++){
            if(isalpha(str[i])||str[i]=='_'||isdigit(str[i])){
               a[i]=0;
			}
			else a[i]=1;
        }
        i=0;
		if(a[0]==0&&!(str[i]>='0'&&str[i]<='9'))
		{
			for(i=1;str[i]!='\0';i++){
				if(a[i]==1){
					flag=0;
					break;
				}
			}
		}
		else flag=0;
		if(flag==0) printf("no\n");
		else printf("yes\n"); 	
		n--;
	}
	return 0;
 } 
