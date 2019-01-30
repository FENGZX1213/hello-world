#include<stdio.h>
int main()
{
  char c;
  int letter=0,flag=0;
  	scanf("%c",&c);
  	while(c!='.')
{
  	if(c==' ')
  	{
  		if(letter!=0)
  		{
  			if(flag==1)
  			{
  				printf(" %d",letter);
			  }else
			  {
			  	printf("%d",letter);
			  	flag=1;
			  } 
		}
		letter=0;
    }
	else{
    	letter++;
	}
	scanf("%c",&c);
}
		if((letter!=0)&&(c=='.')) 
		{
			if(flag==1)
			printf(" %d",letter);
	    else
		printf("%d",letter);}
}