#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
 


//统计一个给定字符串中指定的字符出现的次数。
int main()
{
	 char	str[10];	
	 char	str1[100];
	 int	num[10];	
	 while(cin.getline(str,10))
	 {
		 if(str[0]=='#')
		 {
			exit(-1);
		 }
		 for(int q=0;q<10;q++)
		 {
			num[q]=0;
		 }
		  cin.getline(str1,100);
		  int m=0;
		  int n=0;
		
		while(str1[m]!='\0')
		{
			for(int i=0;str[i]!='\0';i++)
			{
				if(str1[m]==str[i])
				{
					num[i]++;
					  	 
				}
				
			}
			if(str1[m]=='#')
			{
				exit(-1);
			}

			m++;

			
		} 
	

		for(int j=0;str[j]!='\0';j++)
		{
			cout<<str[j]<<' '<<num[j]<<endl;
		
		}




	 }

return 0;
}
 