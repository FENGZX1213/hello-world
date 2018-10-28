#include<iostream>
#include<cstdlib>  
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;  
int main()  
{    
    int num,R;
    char str[100];
    while(scanf("%d %d", &num, &R)!=EOF)
    {
    	int len;
    	if(num<0){
    	printf("-");
    	num=num*-1;//负数变正数 
		}
		itoa(num, str, R);//进制转换 
		len=strlen(str);
		for(int i=0;i<len;i++)
		{
			if(isalpha(str[i])){
				str[i]=toupper(str[i]);
			}/*字母小写转大写*/ 
		}
        cout<<str<<endl;//输出 
    }
    return 0;  
}  

