#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(int n);
using namespace std;
 //��д���򣬶���һ������N��
 //��NΪ�Ǹ����������N��2N֮��������ͣ�
 //��NΪһ������������2N��N֮���������
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
