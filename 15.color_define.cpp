/*************************************************************************
	> File Name: 15-color_define.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Dec 2020 01:40:08 PM CST
 ************************************************************************/

#include <stdio.h>
#define COLOR(a, b) "\033[" #b "m" a "\033[0m"

#define RED(a) COLOR(a, 31)
#define GREEN(a) COLOR(a, 32)
// 宏定义不在编译过程中解析 不用加分号
// 注意宏嵌套使用时有可能会出现  宏部分展开的情况  在 # 和 ## 连接字符串的时候可能会出现
// 这种问题


__attribute__((constructor))
int add(int a, int b) {
    printf(RED("add : %d\n"), __LINE__);
    return a + b;
}

int main() {
    printf(GREEN("main : %d\n"), __LINE__);
    add(2, 3);
    return 0;
}

