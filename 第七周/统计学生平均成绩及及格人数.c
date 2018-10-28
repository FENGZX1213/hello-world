#include<stdio.h>
int main()
{
  int N,grade,i;
  int number=0;
  float average=0.0,total;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&grade);
    total=total+grade;
    if(grade>=60)
    {
        number=number+1;
    }
  }if(N>0)
  {
  average=total/N;}
  printf("average = %.1f\ncount = %d",average,number);
  }
