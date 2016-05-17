#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(int n);
using namespace std;
 //编写程序，读入一个整数N。
 //若N为非负数，则计算N到2N之间的整数和；
 //若N为一个负数，则求2N到N之间的整数和
int main()
{
	int n;
	 while(cin>>n)
	 {
		
		cout<<fun(n)<<endl;
	 
	 
	 }


return 0;
}

int fun(int n)
{
	int l;
	if(n>0||n==0)
	{
		l=(n+1)*n*3/2;
	}
	else
	{
			l=-(n-1)*n*3/2;
	}
	 
return l;
}
