#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long long num1,num2;
    long long x;
    while(cin>>hex>>num1>>num2){ 
          x=num1+num2;
          if(x<0){
          	cout<<'-'<<setiosflags(ios::uppercase)<<hex<<-x<<endl;
		  }
		  else
		  {
		  	cout<<setiosflags(ios::uppercase)<<hex<<x<<endl; 
	      }
	}
 	return 0;
}
