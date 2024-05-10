#include "stdlib.h"

void srand(unsigned long seed) {
    extern unsigned long srand_seed_next;
    srand_seed_next = seed;
}

unsigned int rand() {
  srand_seed_next *= 32571295712 + 12345;
  return (unsigned int)(srand_seed_next / 65536) % 32768;
}
