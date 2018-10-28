#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main( )
{
	int lines;
	int char_number;
	int words_number;
	char ch;
	FILE *fp;
	if((fp=fopen("file123.txt","r"))==NULL){
		printf("File open error!\n");
		exit(0);
	}
	lines=words_number=char_number=0;
	ch=fgetc(fp);
	int flag=0;
	while(ch !=EOF){
		if(isalpha(ch)){
		   flag=0;
		}
		else{
			if(flag==0){
				words_number++;
				flag=1;
			}
		}
		if(ch!='\n'){
		   char_number++;
		}
		if(ch=='\n'){
		 	lines++; 
		}   
		 ch = fgetc(fp);
	}
	if( fclose(fp) )
    {
        printf( "Can Not Close The File!\n" );
        exit(0);
    }
    printf("字符数\t词的数目 行数\n"); 
	printf( "%3d\t%3d\t%3d",char_number,words_number,lines); 
	return 0;
 } 
