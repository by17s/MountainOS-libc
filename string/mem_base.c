#include "../stdlib/stdlib.h"
#include "string.h"

void* memcpy(void* dest, const void* src, size_t n) {
    if (dest == src) return;

    int* dest_i = dest;
    int* src_i  = src;

    for (int i = 0; i < n; i++) dest_i[i] = src_i[i];
}

void* memmove(void* dest, const void* src, size_t n) {
    int* dest_i = dest;
    int* src_i  = src;

    for (int i = 0; i < n; i++) dest_i[i] = src_i[i];
}
