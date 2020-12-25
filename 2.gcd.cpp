/*************************************************************************
	> File Name: 2-gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 14 Dec 2020 11:33:45 PM CST
 ************************************************************************/


#include<iostream>
using namespace std;
/*
int gcd(int a, int b){
    if ( b == 0 ) return a;
    return  gcd(b, a%b);
}
代码优化如下：
*/

int gcd(int a, int b) {
    return ( b ? gcd(b, a % b) : a); // 一行代码实现 欧几里得算法
}


int main() {
    int a, b;
    while ( ~scanf( "%d%d", &a, &b ) ){
        printf( "gcd( %d, %d ) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}

