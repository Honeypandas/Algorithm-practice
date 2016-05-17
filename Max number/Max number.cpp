
#include<iostream>
using namespace std;
int fun(int a,int b);

//输入10个数，要求输出其中的最大值。

int main()
{
int a[10];
int temp;



while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9])
{	
	temp=a[0];
	for(int i=1;i<10;i++)
	{
		if(temp<a[i])
			temp=a[i];
	
	}
	
	cout<<"max="<<temp<<endl;
}



return 0;

}