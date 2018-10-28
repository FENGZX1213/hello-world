#include<stdio.h>
int main()
{
	int M;
	scanf("%d", &M);
	while(M){
		int A,B;
		int sum1=1,sum2=1;
		scanf("%d %d", &A,&B);
		int i,r1,r2;
		for(i=2;i<A;i++){
			r1=A%i;
			if(r1==0)
			sum1=sum1+i;	
			
		}
		for(i=2;i<B;i++){
			r2=B%i;
			if(r2==0)
				sum2=sum2+i;
		}
		if(sum1==B){
			if(sum2==A){
				printf("YES\n");
			}	
		}
		else{
				printf("NO\n");
		}
		M--;
	}
	return 0;
}
