/*************************************************************************
	> File Name: 19.main_func.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Dec 2020 08:54:34 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void output(int argc, char *argv[], char *env[]) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    for (int i = 0; env[i]; i++) {
        if (!strncmp(env[i], "USER=", 5)) {
            if (!strcmp(env[i] + 5, "Rongfan")) {
                printf("welcome rongfan\n");
            } else {
                printf("welcome stranger, please do not run the code\n");
                exit(0);
            }
        }

        printf("env[%d] : %s\n", i, env[i]);
    }
    return ;
}

int main(int argc, char *argv[], char *env[]) {
    output(argc, argv, env);
    return 0;
}

