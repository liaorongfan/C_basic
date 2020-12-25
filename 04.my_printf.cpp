/*************************************************************************
	> File Name: 4.my_printf.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Dec 2020 11:23:42 PM CST
 ************************************************************************/
#include<stdio.h>
#include<stdarg.h>


int my_printf(const char *frm, ...){
    int cnt = 0;
    va_list arg;
    va_start(arg, frm);
    #define PUTC(a) putchar(a), ++cnt
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]){
            case '%': {
                switch (frm[++i]){
                    case '%': PUTC(frm[i]);break;
                    case 'd': {
                        int x = va_arg(arg, int);
                        if (x < 0) PUTC('-'), x = -x;
                        int temp = 0, digit = 0;
                        do {
                            temp = temp * 10 + x % 10;
                            x /= 10;
                            digit++;
                        } while (x);
                        while (digit--){
                            PUTC(temp % 10 + '0');
                            temp /= 10;
                        }
                    } break;
                } break;
            }
            default: PUTC(frm[i]); break;
        }
    }
    #undef PUTC
    va_end(arg);
    return cnt;
}

int main(){
    int a = 123;
    printf("hello world\n");
    my_printf("hello world\n");
    printf("int(a) = %d\n", a);
    my_printf("int(a) = %d\n", a);
    printf("int %d\n", 0);
    my_printf("int %d\n", 0);
    printf("int %d\n", 1000);
    my_printf("int %d\n", 1000);
    printf("int %d\n", -123);
    my_printf("int %d\n", -123);
    return 0;
}
