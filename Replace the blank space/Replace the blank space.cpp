#include<stdio.h>  
#include<string.h>  
   
char str[10000001];  
  
//请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
int main()  
{     
    int i,j,len;  
    while(gets(str)){  
        int count = 0;  
        int len = strlen(str);  
        //统计空格的个数  
        for(i = 0;i < len;i++){  
            if(str[i] == ' '){  
                count++;  
            }  
        }  
        //原始字符串末尾  
        i = len;  
        //替换之后字符串末尾  
        j = 2*count+len;  
        //i == j 表示空格替换完毕  
        while(i != j && i >= 0){  
            if(str[i] == ' '){  
                str[j--] = '0';  
                str[j--] = '2';  
                str[j--] = '%';  
                i--;  
            }  
            else{  
                str[j] = str[i];  
                j--;  
                i--;  
            }  
        }  
        //输出替换之后的字符串  
        len = strlen(str);  
        for(i = 0;i < len;i++){  
            printf("%c",str[i]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
 