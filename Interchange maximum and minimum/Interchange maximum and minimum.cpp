
#include<iostream>
using namespace std;
//����һ����n��Ȼ������n����ֵ������ͬ������������������С����������Ȼ�������
int main()
{
	int a[20];
	int n;
	int max,min;

	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
	max=a[0];	min=a[0];
		for(int j=1;j<n;j++)
		{
			
			if(max<=a[j])
			{
			max=a[j];
			
			}
		
		}

		for(int k=1;k<n;k++)
		{
		
			if(min>a[k])
			{
			min=a[k];
			}
		}

	for(int p=0;p<n;p++)
	{
		if(a[p]==max)
		{
			a[p]=min;
			continue;
		}
		if(a[p]==min)
		{
		
		a[p]=max;
		}
	}

	for(int o=0;o<n;o++)
	{
		
	cout<<a[o];
	if(o!=n-1)
	{
	cout<<' ';
	}
	else cout<<endl;
	}
 	
	}





return 0;
}