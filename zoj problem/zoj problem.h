#include<iostream>
#include<cstring>
using namespace std;

//�Ը������ַ���(ֻ����'z','o','j'�����ַ�),�ж����Ƿ���AC��

// �Ƿ�AC�Ĺ������£�
//1. zoj��AC��
//2. ���ַ�����ʽΪxzojx����Ҳ��AC������x������N��'o' ����Ϊ�գ�
//3. ��azbjc ��AC����azbojacҲ��AC������a,b,cΪN��'o'����Ϊ�գ�


int main()
{
 char str[1010];
 int a,b,c,z,i,j,iz,ij;
 int flag1,flag2;
 while(cin>>str)
 {
  flag1 = flag2 = 0;
  a=b=c=z=j=iz=ij=0;
  for(i=0;i<strlen(str);i++)
  {
   if(str[i]=='z')
   {
    z++;
    iz = i;
   }else if(str[i]=='j')
   {
    j++;
    ij = i;
   }

  }//for
  if(z!=1||j!=1||(z==1&&j==1&&iz>ij))
   cout<<"Wrong Answer"<<endl;
  else{


   for(i=0;i<strlen(str);i++)
   {
    if(flag1==0&&str[i]=='o')
     a++;
    else if(flag1==0&&str[i]=='z')
     flag1 = 1;
    else if(flag2==0&&str[i]=='o')
     b++;
    else if(flag2==0&&str[i]=='j')
     flag2=1;
    else
     c++;
   }//for

   if(a*b==c&&b!=0)
    cout<<"Accepted"<<endl;
   else
    cout<<"Wrong Answer"<<endl;
  }//else
 }//while
 
 return 0;
}
