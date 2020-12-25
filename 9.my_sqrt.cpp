/*************************************************************************
	> File Name: 9.my_sqrt.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 20 Dec 2020 05:29:57 PM CST
 ************************************************************************/
#include<stdio.h>
#include<math.h>

double func(double x) {
    return x * x;
}

double binary_search(double (*arr)(double),double n) {
    double head = 0, tail = n, mid;
    if (n < 1.0) tail = 1.0;
    #define EPSL 1e-6
    while ((tail - head) > EPSL) {
        mid = (head + tail) / 2.0;
        if (arr(mid) < n) head = mid;
        else tail = mid;
    }
    #undef EPSL
    return head;
}


int main() {
    double n;
    while (~scanf("%lf", &n)) {
        printf("my_sqrt(%g) = %g\n", n, binary_search(func, n));
        printf("sqrt(%g) = %g\n", n, sqrt(n)); // %g用来输出实数，它根据数值的大小，自动选f格式或e格式
    }
    return 0;
}
