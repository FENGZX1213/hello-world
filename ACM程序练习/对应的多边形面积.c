#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF&&n!=0)
	{
		double a[100][2];
		int i;
		double sum=0;
		for(i=0;i<n;i++){
			scanf("%lf %lf", &a[i][0],&a[i][1]);
		}
		for(i=0;i<n-1;i++){
			sum=sum+(a[i][0]*a[i+1][1]-a[i+1][0]*a[i][1])*0.5;
		}
		sum=sum+(a[i][0]*a[0][1]-a[i][1]*a[0][0])*0.5;
		printf("%.1f\n",sum);
	}
	return 0;
 } 
