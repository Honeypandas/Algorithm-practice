#include<iostream> 
using namespace std; 
  //输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。

int main() 
{ 
   int a[200];
   int n;
   int x;
bool flag=0;
   while(cin>>n)
   {
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>x;
		for(int j=0;j<n;j++)
		{
			if(a[j]==x)
			{
				cout<<j<<endl;
				flag=1;
				break;
			}	
		}
		
		

		if(flag==0)
		{	
			flag=0;
			cout<<-1<<endl;
		}
		flag=0;
   
   }
  
return 0; 
} 
 