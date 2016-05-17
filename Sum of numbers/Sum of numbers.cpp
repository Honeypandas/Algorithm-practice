
#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(int n);
using namespace std;
 //对于给定的正整数 n，计算其十进制形式下所有位置数字之和，并计算其平方的各位数字之和。
int main()
{
	int n;
 
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		cout<<fun(n)<<' '<<fun(n*n)<<endl;
	}

return 0;
}

int fun(int n)
{
	int sum=0;

	while(n/10!=0)
	{
		sum=n%10+sum;
		n=n/10;
	
	}
	sum=sum+n%10;

	return sum;
}