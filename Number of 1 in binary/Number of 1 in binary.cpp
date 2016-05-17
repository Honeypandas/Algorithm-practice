#include <stdio.h>
 //输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

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