#include "stdlib.h"

void srand(unsigned long seed) {
    extern unsigned long next;
    next = seed;
}

int rand() {
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65536) % 32768;
}
