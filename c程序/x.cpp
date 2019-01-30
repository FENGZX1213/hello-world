#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,e;
  scanf("%f %f %f",&a,&b,&c);
  e=pow(1+c,b);
  d=a*e-a;
  printf("interest = %.2f",d);
}
