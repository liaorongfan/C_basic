/*************************************************************************
	> File Name: 17-pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Dec 2020 05:38:07 PM CST
 ************************************************************************/

#include <stdio.h>
#define P(func) {\
    printf("%s = %d\n", #func, func);\
}

struct Data {
    int x;
    int y;
};

int main() {
    struct Data a[2], *p = a;
    a[0].x = 0, a[0].y = 0;
    a[1].x = 1, a[1].y = 2;
    //printf("a[1].x = %d\n", a[1].x);
    P(a[1].x);
    P( (a + 1)->x );
    P( (*(a + 1)).x );

    P(p[1].x);
    P( (p + 1)->x );

    P( (*(p + 1)).x);

    return 0;
}

