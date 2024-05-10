#include "stdlib.h"
#include <stdio.h>

#define TYPE_BYTE 1
#define TYPE_INT  2
#define TYPE_LONG 4

void qsort(
        void *arr_ptr,
        size_t arr_len,
        size_t elem_len_in_bytes,
        int (*comparator)(const void*, const void*)
    ) {
        size_t i, max_depth = 0;
        int swap_type;

        for (i = arr_len; i > 0; i >>= 1) max_depth++;
        max_depth *= 2;

        switch (elem_len_in_bytes) {
            case TYPE_BYTE: swap_type = TYPE_BYTE; break;
            case TYPE_INT:  swap_type = TYPE_INT;  break;
            case TYPE_LONG: swap_type = TYPE_LONG; break;
        }
    }

void* bsearch(const void* key, 
              const void* base0, 
              size_t nmemb, 
              size_t size, 
              int (*comparator)(const void*, const void*)) {
                const char* base = base0;
                size_t lim;
                int cmp;
                const void* ptr;

                for (lim = nmemb; lim != 0; lim >>= 1) {
                    ptr = base + (lim >> 1) * size;
                    cmp = comparator(key, ptr);
                    
                    if (cmp == 0) {
                        return ((void*)ptr);
                    } else if (cmp > 0) {
                        base = (char*)ptr + size;
                        lim--;
                    }
                }
        return NULL;
}
