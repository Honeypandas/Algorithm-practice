#include<iostream>
#include<string.h>
using namespace std;

void fun(char *p);
int main()
{	
	char l; 
	char s[10];
	char c[10];
	while(cin>>s)
	{
		memcpy(c,s,10);
		int n;
		n=strlen(s);
	//	for(int i=n-1;i>=0;i--)
		for(int i=0;i<n;i++)
			for(int k=0;k<n-1;k++)
			{		
				if(s[k]!=s[k+1])
				{
					l=s[k]; 
					s[k]=s[k+1];
					s[k+1]=l;
					if(strcmp(c,s)==0)
					{
							continue;	
					}
					fun(s);
				}
			}
	
	
	
	
	}


return 0;
}
void fun(char *p)
{
	for(int i=0;p[i]!='\0';i++)
	{
		cout<<p[i];
	}
	cout<<endl;

}