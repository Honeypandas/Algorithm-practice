#include<iostream>
#include<string.h>
#include<stdlib.h>

//给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。
// 现在请计算A+B的结果，并以正常形式输出。

using namespace std;
char* fun(char *p);
int main()
{
	long a,b;
	char str1[100];
	char str2[100];
	while(cin>>str1)
	{
		
		cin>>str2;
		fun(str1);
		fun(str2);
	 
		a=atoi(str1);
		b=atoi(str2);

 	cout<<a+b<<endl;
		
	
	}



return 0;
}

char* fun(char *p)
{
	char *s;
	char *k;
	k=p;
 
	while(*p!='\0')
	{

	 if(*p==',')
	 {
		s=p;
	 
		for(;*s!='\0';s++)
		{
			*s=*(s+1);
		}
		
	 }
	
	p++;
	
	}
 

return k;
}
