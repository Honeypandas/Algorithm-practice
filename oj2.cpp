#include<iostream>
#include<string.h>
using namespace std;
void init(char *p);
int fun(char *t);
int main()
{
	char a[100];

	int flag;
	int add1=0;
	char *p;
	int add2=0;
	int out;

	while(cin>>a)
	{
		flag=1;
		out=0;
		add1=fun(a);
		p=a;

		for(int o=0;*p!='=';o++)
		{	
			 
			cin>>a;
		

			if(*p!='+')
			{
				if(flag==1)
				{
					add1=add1*10+fun(a);
					continue;
				}

				if(flag==2)
				{				
						add2=fun(a);
			 
						cin>>a;
						if(*p!='=')
						{	
				 			add2=add2*10+fun(a);
										
							out=add1+add2;	
							if(out!=0)
							cout<<out<<endl;
							if(out==0)
								cout<<endl;
							goto lo;
						}
						else 
						{
							out=add1+add2;
							if(out!=0)
							cout<<out<<endl;
							if(out==0)
							cout<<endl;
							goto lo;
						}
					
				}


			}

			
						if(*p=='+')
						{
							flag=2;
							continue;
		
						}		
		
		}	 
lo:
		{}
 
	}		
					 
 
	return 0;
}

int fun(char *t)
{
	if(strcmp("one",t)==0)
	{
		return 1;
	}
	if(strcmp("two",t)==0)
	{
		return 2;
	}
	if(strcmp("three",t)==0)
	{			
		return 3;
	}
	if(strcmp("four",t)==0)
	{
		return 4;
	}
	if(strcmp("five",t)==0)
	{
		return 5;	
	}
	if(strcmp("six",t)==0)
	{
		return 6;
	}
	if(strcmp("seven",t)==0)
	{
		return 7;
	}
	if(strcmp("eight",t)==0)
	{
		return 8;
	}
	if(strcmp("nine",t)==0)
	{
		return 9;
	}
	if(strcmp("zero",t)==0)
	{
		return 0;
	}

return 0;
} 
void init(char *p)
{
	for(int i=0;p[i]!='0';i++)
	{
		p[i]='0';
	}

}
