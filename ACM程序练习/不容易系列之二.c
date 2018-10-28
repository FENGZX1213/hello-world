#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while(N){
		int a,i,sum=3;
		scanf("%d", &a);
		for(i=0;i<a;i++)
		sum=(sum - 1)*2;
		printf("%d\n", sum);
		N--;
	}
	return 0;
}
