#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

//����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc,
//���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
 
bool next_permutation(string &s) {
    int n = s.length();
    bool res = false;
    if (n < 2) return res;
    int a, b;
    for (a = n - 2; a >= 0; --a) {
        if (s[a] < s[a + 1]) {
            res = true;
            break;
        }
    }
    for (b = n - 1; b > a; --b) {
        if (s[a] < s[b]) {
            break;
        }
    }
    char tmp = s[a];
    s[a] = s[b];
    s[b] = tmp;
    reverse(s.begin() + a + 1, s.end());
    return res;
}
 
int main() {
    string s;
    while (cin >> s) {
        sort(s.begin(), s.end());
        do {
            printf("%s\n", s.c_str());
        } while (next_permutation(s));
    }
    return 0;
}