/*************************************************************************
	> File Name: 16-ip.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Dec 2020 03:31:10 PM CST
 ************************************************************************/

/* 实现ip地址转整型的功能*/

#include <stdio.h>


union IP {
    struct {
        unsigned char a1; //无符号字符型
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    } ip;  // 匿名结构体
    unsigned int num; //无符号整型
};

int main() {
    union IP p; //用共用体结构IP定义变量p
    char str[100] = {0};
    int arr[4];
    while (~scanf("%s", str)) {
        sscanf(str, "%d.%d.%d.%d", arr, arr + 1, arr + 2, arr + 3);
        p.ip.a1 = arr[0];
        p.ip.a2 = arr[1];
        p.ip.a3 = arr[2];
        p.ip.a4 = arr[3];
        printf("%u\n", p.num); 

    }
    return 0;
}
