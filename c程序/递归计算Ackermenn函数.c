#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}
int gcd( int x, int y )
{
	int a,t;
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	a=x%y;
	while(a!=0)
	{
		x=y;
		y=a;
		a=x%y;
	}
	return y;
}
