

#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(int n);
using namespace std;
 //设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。
int main()
{
	int sum;
 //int a=3,b=0,c=0;
	for(int a=0;a<10;a++)
		for(int b=0;b<10;b++)
			for(int c=1;c<10;c=c+5)
			{
				sum=(a+b)*100+b*10+c*10+c+c;
				if(sum==532)
				{

					cout<<a<<' '<<b<<' '<<c<<endl;
				}
			
			}







return 0;
}