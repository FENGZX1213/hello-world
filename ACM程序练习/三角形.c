#include<stdio.h>
int main()
{
	double A,B,C,n;
	scanf("%lf", &n);
	while(n--){
		scanf("%lf %lf %lf",&A,&B,&C);
		if(A+B>C&&A+C>B&&B+C>A){
			printf("YES\n");
		}
		else{
		    printf("NO\n");	
		}
		
	}
	return 0;
}
