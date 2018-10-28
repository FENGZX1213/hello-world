#include<iostream>
using namespace std;
int main()
{
	int w,h;
	while(cin>>w>>h){
		int i,j;
		printf("+");
		for(i=0;i<w;i++){
			printf("-");
		}
		printf("+\n");
		while(h--)
		{
		    printf("|");
			for(j=0;j<w;j++){
			printf(" ");
	     	}
	     	printf("|");
	     	printf("\n");
	    }
	    printf("+");
		for(i=0;i<w;i++){
			printf("-");
		}
		printf("+\n");
		printf("\n");                       
	}
	return 0;
}
