
#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(int n);
using namespace std;
 //���ڸ����������� n��������ʮ������ʽ������λ������֮�ͣ���������ƽ���ĸ�λ����֮�͡�
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