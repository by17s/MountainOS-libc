#include "stdlib.h"
#include <stdio.h>

#define TYPE_BYTE 1
#define TYPE_INT  2
#define TYPE_LONG 4

void qsort(
        void *arr_ptr,
        size_t arr_len,
        size_t element_size,
        int (*comparator)(const void*, const void*)
    ) {
        size_t i, max_depth = 0;
        int swap_type;

        for (i = arr_len; i > 0; i >>= 1) max_depth++;
        max_depth *= 2;

        switch (element_size) {
            case TYPE_BYTE: swap_type = TYPE_BYTE; break;
            case TYPE_INT:  swap_type = TYPE_INT;  break;
            case TYPE_LONG: swap_type = TYPE_LONG; break;
        }
    }

void* bsearch(void* key, void* arr, unsigned element_count, unsigned element_size, int (*comparator)(void*, void*)) {
  while (ecount) {
    unsigned mid = element_count >> 1;
    char* p = (char*)arr + mid * element_size;
    int compare = comparator(key, p);

    // не соотвествует положительному
    if (!compare) {
      return p;
    }
    else if (t < 0) {
      element_count = mid;
    }
    else {
      base = p + element_size;
      element_count -= mid + 1;
    }
  }

  return 0;
}
