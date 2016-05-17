
#include<iostream>
#include<string.h>
#include<stdlib.h>
int fun(char *str);
using namespace std;
  // 输入一个ip地址串，判断是否合法。
int main()
{
	int n;
	char str[30];
	while(cin>>n)
	{
		for(int o=0;o<n;o++)
		{
			cin>>str;
			
			if(fun(str))
			{
				
				cout<<"Yes!"<<endl;
			
			}
		
			else cout<<"No!"<<endl;
		

	
	
		}
	}
 


return 0;
}


int fun(char *str)
{
	int flag=1;
	int s=0;
	int sum=0;
	for(int j=0;;j++)
	{
		if(str[j]!='.')
		{
			s++;
		}	

		if(str[j]=='.')
		{
			int l=1;
			for(int m=j-1;m>=j-s;m--)
			{	
			
				sum=(str[m]-'0')*l+sum;
				l=l*10;
			
			}
			//cout<<sum<<endl;
			
			if(0>sum||sum>255)
			{	
				flag=0;break;
			}
			s=0;
			sum=0;
		}
	
		if(str[j]=='\0')
		{
			int l=1;
			for(int m=j-1;m>=j-s+1;m--)
			{	
			
				sum=(str[m]-'0')*l+sum;
				l=l*10;
				
			}	
		//	cout<<sum<<endl;
			if(0>sum||sum>255)
			{	
				flag=0;
			}
			break;
		}
	
	
	}

	
	if(flag)
	{
		return 1;
	}
	
	else return 0;



} 