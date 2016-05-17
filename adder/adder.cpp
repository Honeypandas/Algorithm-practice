#include<iostream>
#include<string.h>
#include<stdlib.h>
 
using namespace std;
 //实现一个加法器，使其能够输出a+b的值。
int main()
{
 char str1[1000];
 char str2[1000];
 int l1,l2;
 int flag=0;
int  s;
 while(cin>>str1)
 {
	 flag=0;
	cin>>str2;
	l1=strlen(str1)-1;
	l2=strlen(str2)-1;
 //	cout<<(str1[l1]-'0')+(str2[l2]-'0')<<endl;
	if(l1>=l2)
	{
		for(;l2>=0;l2--)
		{
			s=(str1[l1]-'0')+(str2[l2]-'0');

			str1[l1]=s%10+'0';

			if(s/10==1)
			{
				
				if(l1==0)
				{
					flag=1;
				}

				str1[l1-1]=(str1[l1-1]-'0')+1+'0';
			
			}

		l1--;
		}

		for(;l1>=0;l1--)
		{
			s=(str1[l1]-'0');
			if(s/10==1)
			{
				if(l1==0)
				{
					flag=1;
				}
					str1[l1]=s%10+'0';
					str1[l1-1]=(str1[l1-1]-'0')+1+'0';
			}
		
	 
			
		}
	}

if(l1<l2)
	{
		for(;l1>=0;l1--)
		{
				s=(str1[l1]-'0')+(str2[l2]-'0');

				str2[l2]=s%10+'0';

				if(s/10==1)
				{
					
					if(l2==0)
					{
						flag=1;
					}

					str2[l2-1]=(str2[l2-1]-'0')+1+'0';
				
				}
				l2--;
			
		}

		for(;l2>=0;l2--)
		{
			s=(str2[l2]-'0');
			if(s/10==1)
			{
					if(l2==0)
					{
						flag=1;
					}
					str2[l2]=s%10+'0';
					str2[l2-1]=(str2[l2-1]-'0')+1+'0';
			}
		
		}
	}


	if(flag==1)
	{
		cout<<'1';
	}

	if(strlen(str1)>=strlen(str2))
	{
		cout<<str1<<endl;
	}
	
	else cout<<str2<<endl;
 }
	return 0;
}
