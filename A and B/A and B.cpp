#include<iostream>
#include<string.h>
#include<stdlib.h>

//������������A��B�����ʾ��ʽ�ǣ��Ӹ�λ��ʼ��ÿ��λ���ö���","������
// ���������A+B�Ľ��������������ʽ�����

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
