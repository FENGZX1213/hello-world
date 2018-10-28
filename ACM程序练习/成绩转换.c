#include<stdio.h>
int main()
{
  int grade;
  while(scanf("%d",&grade)!=EOF)
  {
  if(grade<=69&&grade>=60)
  printf("D\n");
  else if(grade<=79&&grade>=70)
  printf("C\n");
  else if(grade<=89&&grade>=80)
  printf("B\n");
  else if(grade>=90&&grade<=100)
  printf("A\n");
  else if(grade<=59&&grade>=0)
  printf("E\n");
  else printf("Score is error!\n");
  }
return 0;
}
