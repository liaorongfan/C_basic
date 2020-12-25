/*************************************************************************
	> File Name: 14-string.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Dec 2020 12:16:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>


int main() {
    char str[11] = {0};
    int n;
    while (~scanf("%d", &n)) {
        sprintf(str, "%X", n); //将整数值n以16位的方式读入到str中
        printf("%s has %lu digits\n", str, strlen(str) );
    }

    return 0;
}

