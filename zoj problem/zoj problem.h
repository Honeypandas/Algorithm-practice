#include<iostream>
#include<cstring>
using namespace std;

//对给定的字符串(只包含'z','o','j'三种字符),判断他是否能AC。

// 是否AC的规则如下：
//1. zoj能AC；
//2. 若字符串形式为xzojx，则也能AC，其中x可以是N个'o' 或者为空；
//3. 若azbjc 能AC，则azbojac也能AC，其中a,b,c为N个'o'或者为空；


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
