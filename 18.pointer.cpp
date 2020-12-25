/*************************************************************************
	> File Name: 18.pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Dec 2020 07:35:33 PM CST
 ************************************************************************/

#include <stdio.h>
#define offset(T, a) ({\
    T temp;\
    (char *)(&temp.a) - (char *)(&temp);\
})


struct Data {
    int a;
    double b;
    char c;
};


int main() {
    int num = 0x0626364;
    printf("%s\n", (char *)(&num)); // 将num当成字符串打印输出
    printf("%ld\n", offset(struct Data, a));
    printf("%ld\n", offset(struct Data, b));
    printf("%ld\n", offset(struct Data, c));
    return 0;
}

