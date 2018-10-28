#include<iostream>
using namespace std;
int gcd(int big,int small)
{
	/*if(small>big) swap(small,big);
	int temp;
	while(small!=0)
	{
		if(small>big) swap(small,big);
		temp=big%small;
		big=small;
		small=temp;
	}
	return big;*/
	return (small>0)?gcd(small,big%small):big;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
 } 
