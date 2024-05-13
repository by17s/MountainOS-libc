#include "string.h"
#include "../stdlib/stdlib.h"

size_t strlen(const char *str) {
    int i = 0;
    while(str[++i] != '\0') ;
    return i;
}
