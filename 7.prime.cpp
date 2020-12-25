/*************************************************************************
	> File Name: 7.prime.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 20 Dec 2020 01:05:14 AM CST
 ************************************************************************/

#include<stdio.h>

#define max_n 100mZ
int pirme[max_n + 5];
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;  // prime[0]=0时: !prime[0]=1 为真 即当prime[i]为质数的时候
        for (int j = 1; j <=prime[0]; j++) {
            if (prime[])
        }
    }

}
int main() {

    return 0;
}

