#include<stdio.h>
int main()
{
    int a,b;
    double x,y;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(b)
{
    case 90:x=6.95;break;
    case 93:x=7.44;break;
    case 97:x=7.93;break;
}
    switch(c)
    {
        case'm':y=0.95;break;
        case'e':y=0.97;break;
    }
    printf("%.2f",a*x*y);
}
