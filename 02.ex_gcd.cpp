/*************************************************************************
	> File Name: 3-ex_gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 15 Dec 2020 10:07:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int ex_gcd( int a, int b, int *x, int *y ){
    if( !b ){  // 当b == 0 的时候执行， 条件成立
        *x = 1, *y = 0;
        return a;
    }
    int xx, yy, ret = ex_gcd(b, a % b, &xx, &yy);
    *x = yy;
    *y = xx - (a / b) * yy;
    return ret;
}


int main() {
    int a, b, x, y;
    while (~scanf("%d%d", &a, &b)){
        printf("ex_gcd(%d, %d) = %d \n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, (a * x + b * y));
    }  
    return 0;
}
