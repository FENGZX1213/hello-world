#include<stdio.h>
#define N 50
#define M 5
int main()
{
	int n, m;
	double average1[N],sum1;
	int a[N][M];
	int i,j;
	while(scanf("%d %d", &n,&m)!=EOF)
	{
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
		for(i=0;i<n;i++){
			sum1=0;
		    for(j=0;j<m;j++){
		        sum1=sum1+a[i][j];
	        }
	            average1[i]=sum1/m;
	    }
	    double sum2,average2[N];
		for(j=0;j<m;j++){
			sum2=0;
			for(i=0;i<n;i++){
				sum2=sum2+a[i][j];
			}
			average2[j]=sum2/n;
		}
		int num, x;
		num=0;
		for(i=0;i<n;i++){
			x=0;
		    for(j=0;j<m;j++){
		    	if(a[i][j]>=average2[j])
		    	x++;
			}
			if(x==m)
			num++; 
		}
		for(i=0;i<n;i++){
			if(i==0)
			printf("%.2f", average1[i]);
			else
			printf(" %.2f", average1[i]); 
		}
		printf("\n");
		for(j=0;j<m;j++){
			if(j==0)
			printf("%.2f", average2[j]);
			else
			printf(" %.2f", average2[j]); 
		}
		printf("\n");
		printf("%d\n\n", num);      
   }	
        return 0;
}
