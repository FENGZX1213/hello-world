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
    	num=num*-1;//���������� 
		}
		itoa(num, str, R);//����ת�� 
		len=strlen(str);
		for(int i=0;i<len;i++)
		{
			if(isalpha(str[i])){
				str[i]=toupper(str[i]);
			}/*��ĸСдת��д*/ 
		}
        cout<<str<<endl;//��� 
    }
    return 0;  
}  

