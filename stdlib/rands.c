#include "stdlib.h"



int rand() {
  seed = seed * 1103515245 + 12345;
  return (unsigned int)(seed / 65536) % 32768;
}