size_t strlen(const char *str) {
    int i = 0;
    while(str[i++ + 1] != '\0') {}
    
    return i;
}
