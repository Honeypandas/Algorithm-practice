

#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(int n);
using namespace std;
 //��a��b��c����0��9֮������֣�abc��bcc��������λ�������У�abc+bcc=532������������������a��b��c��ֵ��
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