#include<stdio.h>
#include<math.h>
int main()
{
    int i,a=1,N;
  float x,n,sum=0.0;
  scanf("%d",&N);
  for(i=1;i<=N;i=i+1)
  { 
    a=a+1;
    x=pow(-1,a);
    n=x*i/(2*i-1);
    sum=sum+n;
    } 
  printf("%.3f",sum);
}
