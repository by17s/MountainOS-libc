#ifndef MOUNTAIN__OS__STRING__H__
#define MOUNTAIN__OS__STRING__H__

size_t strlen(const char *str);

char*  strcpy(char *to_here, const char *from_here);
char*  strncpy(char *to_here, const char *from_here, size_t len);

int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t len);

#endif /*MOUNTAIN__OS__STRING__H__*/
