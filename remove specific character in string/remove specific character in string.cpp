
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

 //�����ַ���s���ַ�c��Ҫ��ȥ��s�����е�c�ַ�������������

int main()
{
	 char str1[100];

	 while(cin>>str1)
	 { 
		 char ch;
		 cin>>ch;
		
	    
		char str2[100];
		
		
		int m=0;
		int i=0;
		for(;str1[m]!='\0';m++)
		{

			if(str1[m]==ch)
			{
			
				
				 continue;
			}
	
			str2[i]=str1[m];
			i++;
			
		}
		str2[i]='\0';

		 
	 
	 	cout<<str2<<endl;
	 
	 	 for(int k=0;k<100;k++)
		 {
			str1[k]=0; 
			 
		}
	 
	 }

return 0;
}
