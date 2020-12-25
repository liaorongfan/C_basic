/*************************************************************************
	> File Name: 8.binary_search.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 20 Dec 2020 11:32:42 AM CST
 ************************************************************************/
#include<stdio.h>

int binary_search(int *arr, int n, int x) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) / 2; //可以用更高效的做法  mid = (head + tail) >> 1;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) head = mid + 1; //mid 不是下标所在的位置
        else tail = mid - 1;
    }
    return -1;  //返回-1 提示没有找到
}

int main() {
    int array[100] = {0};
    int n, x;
    scanf("%d", &n); // 在键盘当中 读入n
    for (int i = 0; i < n; i++) {  // 从键盘中依次读入 n个整数到数组arr中
        scanf("%d", &array[i]);
    }
    while (~scanf("%d", &x)) {  // 等待输入待查询数值 z
        printf("%d\n", binary_search(array, n, x));  // 输入arr 和数组中的n个元素，以及待查找元素x
    }
    return 0;
}

