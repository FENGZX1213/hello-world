#include<stdio.h>
#include<math.h> 
int main()
{
      int N,i;
      double sum=0,s=0;
      scanf("%d",&N);
      for(i=1;i<=N;i++)
      {
      	s=sqrt(i);
      	sum=sum+s;
	  }
	  printf("sum = %.2f",sum);
} 
