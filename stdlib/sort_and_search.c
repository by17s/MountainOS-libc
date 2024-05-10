#include "stdlib.h"
#include <stdio.h>



//--------------------------------------------------------------QUICK SORT--------------------------------------------------------------\\
static void exchange(char* first_elem, char* second_elem, unsigned size) {
  while (size--) {
    int temp = *first_elem;
    *first_elem++ = *second_elem;
    *second_elem++ = temp;
  }
}

void qsort(void* arr, unsigned element_count, unsigned element_size, int (*comparator)(void*, void*)) {
  unsigned heap_size = 0;

  // возможен stack overflow
  while (element_count--) {
    unsigned i = heap_size;
    unsigned parent = (i - 1) >> 1;
    while (i && comparator((char*)arr + parent * element_size, (char*)arr + i * element_size) < 0) {
      exchange((char*)arr + parent * element_size, (char*)arr + i * element_size, element_size);
      i = parent;
      parent = (parent - 1) >> 1;
    }
    heap_size++;
  }

  while (heap_size--) {
    unsigned i = 0;
    exchange((char*)arr, (char*)arr + heap_size * element_size, element_size);
    while (i < (heap_size >> 1)) {
      unsigned left = (i << 1) + 1;
      unsigned right = left + 1;
      unsigned candidate = left;
      
      if (right < heap_size && comparator((char*)arr + right * element_size, (char*)arr + left * element_size) > 0) candidate = right;
      if (comparator((char*)arr + i * element_size, (char*)arr + candidate * element_size) >= 0) break;
      exchange((char*)arr + i * element_size, (char*)arr + candidate * element_size, element_size);
      i = candidate;
    }
  }
}

//--------------------------------------------------------------BINARY SEARCH--------------------------------------------------------------\\

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

  return NULL;
}
