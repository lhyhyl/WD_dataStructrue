//#include <stdio.h>
//#include <string.h>
//void Next(char* T, int* next) {
//    int i = 0;
//    next[0] = -1;
//    int j = -1;
//    while (i < strlen(T)) {
//        if (j == -1 || T[i] == T[j]) 
//            next[++i] = ++j;
//        else 
//            j = next[j];
//    }
//}
//int KMP(char* S, char* T) {
//    int next[10];
//    Next(T, next);//根据模式串T,初始化next数组
//    int i = 0;
//    int j = 0;
//    while (i < strlen(S) && j < strlen(T)) {
//        //j==0:代表模式串的第一个字符就和当前测试的字符不相等；S[i]==T[j],如果对应位置字符相等，两种情况下，指向当前测试的两个指针下标i和j都向后移
//        if (j == 0 || S[i] == T[j]) {
//            i++;
//            j++;
//        }
//        else {
//            j = next[j];//如果测试的两个字符不相等，i不动，j变为当前测试字符串的next值
//        }
//    }
//    if (j == strlen(T)) {//如果条件为真，说明匹配成功
//        return i - j +1;
//    }
//    return -1;
//}
//
//int main() {
//    char mainStr[] = "ababcabcacbab";
//    char subStr[] = "cac";
//    int i = KMP(mainStr, subStr);
//    printf("%d", i);
//    return 0;
//}