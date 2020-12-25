/*************************************************************************
	> File Name: 12.log.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 24 Dec 2020 12:24:44 AM CST
 ************************************************************************/

#include <stdio.h>

#ifdef DEGUG
#define log(frm, args...) {\
    printf("[%s -> %s : %d] ",__FILE__,  __func__, __LINE__);\
    printf(frm, ##args);\
}
#else
#define log(frm, args...)
#endif




//#define contact(a, b) a##b

// ## 表示字符串连接

int main() {
    int a = 123, abc, def;
    int abcdef = 0;
    printf("[%s : %d]" "hello kaikeba\n", __func__, __LINE__);
    log("hello kevin\n");
    log("%d\n", a);
    //contact(abc, def) = 234;
    log("abcdef = %d\n", abcdef);
    return 0;
}

