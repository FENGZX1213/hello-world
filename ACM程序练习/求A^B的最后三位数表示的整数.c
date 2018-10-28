#include<stdio.h>
int main()
{
	int A, B;
	while(scanf("%d %d", &A,&B)!=EOF&&(A||B))
	{
		int sum,i;
		sum=1;
		for(i=1;i<=B;i++){
			sum=sum*A;
			if(sum>1000){
			sum=sum%1000;
		    }
		}
		printf("%d\n",sum);
	}
	return 0;
 } 
