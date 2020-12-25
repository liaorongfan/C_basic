/*************************************************************************
	> File Name: 6.prime.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 19 Dec 2020 07:33:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>

#define max_n 100

int prime[max_n + 5] = {0};  // 防止数组越界

/*
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i] == 0) {  // i 是素数的时候枚举它的倍数
            for (int j = 2 * i; j <= max_n; j++) {
                prime[j] = 1;
            }
        }
    }
    return ;
}
// 代码优化： 以上程序有三个缩进，缩进影响代码的可读性。
*/


/*
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;  // 被标记的话则跳过 
        for (int j = 2 * i; j <= max_n; j += i) { // 增加的方式是 += i 即每次增加 i 的倍数
            prime[j] = 1;
        }
    }
    
    return ;
}

int main(){
    init();
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        printf("%d\n", i);
    }
    return 0;

//为使用方便输出 ，在遍历的时候同时 记录数值
*/

/*
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;  // 被标记的话则跳过 
        prime[++prime[0]] = i;
        for (int j = 2 * i; j <= max_n; j += i) { // 增加的方式是 += i 即每次增加 i 的倍数
            prime[j] = 1;
        }
    }
    return ;
}
// 继续优化 数值查找范围 ,这里有肯能出现 爆栈的问题，数组越界
*/

void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;  // 被标记的话则跳过 
        prime[++prime[0]] = i;
        for (int j = i * i; j <= max_n; j += i) { // 增加的方式是 += i 即每次增加 i 的倍数
            prime[j] = 1;
        }
    }    
    return ;
}

int main(){
    init();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
