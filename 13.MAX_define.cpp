/*************************************************************************
	> File Name: 13.MAX_define.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 24 Dec 2020 11:16:37 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX(a, b) ({\
    __typeof(a) _a = (a);\
    __typeof(b) _b = (b);\
    _a > _b ? _a : _b;\
})

#define P(func) {\
    printf("%s = %d\n", #func, func);\
}
// #func 字符串化


int main() {
    int a = 7;
    P(MAX(2,3));
    P(5 + MAX(2,3));
    P(MAX(2,MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a)
    return 0;
}
// g++ -E file_name.cpp 展开编译过程
//
