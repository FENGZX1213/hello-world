#include<stdio.h>
int main()
{
	int n;
	int m,i;
	int a,b,c,d,e,f,k;
	while(scanf("%d", &n)!=EOF&&n!=0)
	{
		k=0;
		for(i=0;i<n;i++){
			scanf("%d", &m);
		    a=m/100;
		    b=m%100/50;
		    c=m%100%50/10;
		    d=m%100%50%10/5;
		    e=m%100%50%10%5/2;
		    f=m%100%50%10%5%2;
		    k=k+a+b+c+d+e+f;	
	   }
		printf("%d\n", k);
	}
	return 0;
}
