#include<stdio.h>
int main()
{
  int a,b,c,d;
  double e;
  scanf("%d %d",&a,&b);
  c=1.1*b;
  d=1.5*b;
  e=(double)100*(a-b)/(double)b;
  if(a<=c)
  printf("OK");
  else if(a<d)
    printf("Exceed %.0f%%. Ticket 200",e);
    else
  printf("Exceed %.0f%%. License Revoked",e);
}
