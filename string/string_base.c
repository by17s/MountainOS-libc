#include "string.h"
#include "../stdlib/stdlib.h"

size_t strlen(const char* str) {
    int i = 0;
    while(str[++i] != '\0') ;
    return i;
}

char* strcpy(char* to_here, const char* from_here) {
    for (int i = 0; from_here[i] != '\0'; i++) to_here[i] = from_here[i];
    return to_here;
}

char* strncpy(char* to_here, const char* from_here, size_t len) {
    for (int i = 0; i < len; i++) to_here[i] = from_here[i];
    return to_here;
}

int strcmp(const char* str1, const char* str2) {
    size_t str1_len = 0, str2_len = 0;
    for (int i = 0; str1[i] != '\0'; i++) str1_len++;
    for (int i = 0; str2[i] != '\0'; i++) str2_len++;

    if (str1_len > str2_len) return 1;
    else return -1;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) return 2;
    }

    return 0;
}
int strncmp(const char* str1, const char* str2, size_t len) {
    for (int i = 0; i < len; i++) if (str1[i] != str2[i]) return 2;

    return 0;
}

char* strchr(const char* s, int c) {
    for (int i = 0; s[i] != '\0'; i++) if (s[i] == c) return s;

    return NULL;
}
char* strrchr(const char* s, int c) {
    char* end_s;
    int len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        end_s = &s[i+1];
        len++;
    }

    while (end_s[len] != *s) if (end_s[len] == c) return end_s;
    
    return NULL;
}
