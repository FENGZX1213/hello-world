#include<stdio.h>
int main()
{
  int n,N,conumber,i=1,number;
  scanf("%d %d",&conumber,&N);
  for(n=0;number>=0;n++)
  {
  	scanf("%d",&number);
  	if(number<0)
  	{
  		i=0;
  		printf("Game Over");
  		break;
	  }
	if(n>=N)
	{
		printf("Game Over");
		break;
	}
  	if((number==conumber)&&(n==0))
  	{
  		printf("Bingo!");
  		i=0;
  		break;
	  }else if(number>conumber)
	  {
	  	printf("Too big\n");
	  }else if(number<conumber)
	  {
	  	printf("Too small\n");
	  }
	  else if(number==conumber)
	  {
	  	if(n<3)
	  	{
	  		printf("Lucky You!\n");
	  		i=1;
	  		break;
		  }
	  	else if((n>=3)&&(n<=N))
	  	  {
	  		printf("Good Guess!\n");
            i=1;
	  		break;
		  }
	  }
   }if(n<N)	
  {  
   while(number>=0)
   { 
   	if(i==0)break;
	   else 
	   {
	   	scanf("%d",&number);
	   }
   }
  }
}

