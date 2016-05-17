
#include<iostream> 
using namespace std;

 //对于一个数n，如果是偶数，就把n砍掉一半；如果是奇数，把n变成 3*n+ 1后砍掉一半，直到该数变为1为止。

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