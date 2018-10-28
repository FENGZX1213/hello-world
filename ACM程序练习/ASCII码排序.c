//输入3个字符后的回车过滤掉，不然回车就会成为下一组的第一个字符。
#include<stdio.h>
int main()
{
	char a,b,c,t;
	while(scanf("%c%c%c",&a,&b,&c)!=EOF)
	{
		getchar();
		if (a>b) {t=a;a=b;b=t;}
        if (a>c) {t=a;a=c;c=t;}
        if (b>c) {t=b;b=c;c=t;}
        printf("%c %c %c\n",a,b,c);
	}
 } 
