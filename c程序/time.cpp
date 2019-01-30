#include<stdio.h>
int main()
{
    int time;
    int mini;
    int hour,minute,total;
    scanf("%d %d",&time,&mini);
    total=time/100*60+time%100;
    hour=(total+mini)/60;
    minute=(total+mini)%60;
    printf("%d%02d",hour,minute);
    }




