#include <stdio.h>
 //����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��

int Count (int n){
    int cnt = 0;
    while (n){
        ++cnt;
        n &= (n - 1);
    }
    return cnt;
}
 
int main(void){
    int T;
    int n;
 
    while (scanf ("%d", &T) != EOF){
        while (T-- != 0){
            scanf ("%d", &n);
            printf ("%d\n", Count (n));
        }
    }
 
    return 0;
}