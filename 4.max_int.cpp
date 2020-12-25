/*************************************************************************
	> File Name: 4-max_int.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 15 Dec 2020 11:18:23 PM CST
 ************************************************************************/

#include<iostream>
#include<inttypes.h>
#include<stdarg.h>


int max_int(int n, ...){
    int ans = INT32_MIN;  // c语言 32位整型 最小值的 宏定义
    va_list arg;
    va_start(arg, n);  // 变参函数，中查找 参数的方法，从第一个参数n 往后一次去找
    while (n--){
        int temp = va_arg(arg, int);  // 注意这传的是类型，不是变量 / va_arg 不是一个函数，而表现的像一个函数，其本质是一个宏定义
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main(){
    printf("%d\n", max_int(3, 2, 4, 5));
    printf("%d\n", max_int(5, 23, 12, 2, 4, 24));
    return 0;
}
