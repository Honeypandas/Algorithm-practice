#include<iostream> 
using namespace std; 
  //����һ����n��Ȼ������n����ֵ������ͬ��������һ��ֵx��������ֵ����������е��±꣨��0��ʼ�������������������-1����

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
 