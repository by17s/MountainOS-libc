#ifndef MOUNTAIN__OS__STRING__H__
#define MOUNTAIN__OS__STRING__H__

size_t strlen(const char* str);

char* strcpy(char* to_here, const char* from_here);
char* strncpy(char* to_here, const char* from_here, size_t len);

int strcmp(const char* str1, const char* str2);
int strncmp(const char* str1, const char* str2, size_t len);

void strcat(char* dest, const char* src);

char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);

void* memcpy(void* dest, const void* src, size_t n);
void* memmove(void* dest, const void* src, size_t n);

void* memset(char* dest, char value, size_t size);
int memcmp(const char* s1, const char* s2, size_t n);

#endif /*MOUNTAIN__OS__STRING__H__*/
