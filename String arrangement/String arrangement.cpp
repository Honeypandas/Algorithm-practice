#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

//输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,
//则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
 
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