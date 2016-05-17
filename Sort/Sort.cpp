#include<iostream> 
using namespace std;
#define off 500000
int hash[1000000];
  

//给你n个整数，请按从大到小的顺序输出其中前m大的数。
int main() 
{ 
	int x,n,s;
	while(cin>>n)
	{
		cin>>x;
	 
		for(int i=-500000;i<=500000;i++)
			hash[i+off]=0;
		for(int k=0;k<n;k++)
		{	
			cin>>s;
		
			hash[s+off]=1;
		}
		 for(int l=500000;l>=-500000;l--)
		 {
			if(hash[l+off]==1)
			{
				cout<<l;
				x--;
				if(x!=0)
					cout<<' ';
				else 
				{
					cout<<endl;
					break;
				}
			}
		 }


	
	}
return 0; 
} 
 