#include<stdio.h>  
#include<string.h>  
   
char str[10000001];  
  
//��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
int main()  
{     
    int i,j,len;  
    while(gets(str)){  
        int count = 0;  
        int len = strlen(str);  
        //ͳ�ƿո�ĸ���  
        for(i = 0;i < len;i++){  
            if(str[i] == ' '){  
                count++;  
            }  
        }  
        //ԭʼ�ַ���ĩβ  
        i = len;  
        //�滻֮���ַ���ĩβ  
        j = 2*count+len;  
        //i == j ��ʾ�ո��滻���  
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
        //����滻֮����ַ���  
        len = strlen(str);  
        for(i = 0;i < len;i++){  
            printf("%c",str[i]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
 