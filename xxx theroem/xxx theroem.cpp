
#include<iostream> 
using namespace std;

 //����һ����n�������ż�����Ͱ�n����һ�룻�������������n��� 3*n+ 1�󿳵�һ�룬ֱ��������Ϊ1Ϊֹ��

int fun(int p);
int main() 
{ 
	 
	int a[1000];
	int n;
	int num=0;
	int k=1;
	 
	while(cin>>n)
	{

		while(n!=0)
		{
			a[num]=fun(n);
			num++;
			 for(;;)
			 {
				cin>>n;
				if(n==0)
				 {
					break;
				 }
				 else
				 {
					a[num]=fun(n);
					
					num++;
				 }
				 
			 
			 }

			for(int i=0;i<num;i++)
			cout<<a[i]<<endl;
	
		}	
		num=0;
	}

	 
return 0; 
} 

 int fun(int p)
 {
	 int m=0;
	while(p!=1)
	{
		if(p%2==0)
		{
		p=p/2;
		m++;
		}
		else
		{
		p=(3*p+1)/2;
		m++;
		}
	
	
	}
 
 return m;
 
 }