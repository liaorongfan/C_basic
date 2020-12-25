/*************************************************************************
	> File Name: 11.array.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 23 Dec 2020 12:15:54 AM CST
 ************************************************************************/

#include<stdio.h>
#define max_n 100

int main() {
    int arr[max_n + 5] = {0}, n;
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // 等价于 scanf("%d", arr + i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
