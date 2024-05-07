#include "stdlib.h"

int atoi(const char* str) {
    int num = 0;
    while(*str >= '0' && *str <= '9') {
        num *= 10;
        num += *str++;
        num -= '0';
    }
    return num;
}

long atol(const char* str) {
    long num = 0;
    while(*str >= '0' && *str <= '9') {
        num *= 10;
        num += *str++;
        num -= '0';
    }
    return num;
}

long long atoll(const char* str) {
    long long num = 0;
    while(*str >= '0' && *str <= '9') {
        num *= 10;
        num += *str++;
        num -= '0';
    }
    return num;
}