#ifndef MOUNTAIN__OS__STDLIB__H__
#define MOUNTAIN__OS__STDLIB__H__
    // CONSTANTS
    #define NULL 0

    // TYPES
    typedef unsigned int size_t;
    typedef struct {
        int quot, rem;
    } div_t;
    typedef struct {
        long int quot, rem;
    } ldiv_t;    


    // FUNCTIONS
    int atoi(const char *str);
    long atol(const char *str);
    long long atoll(const char *str);
    double atof(const char *str);

    int abs(int arg);
    long labs(long arg);
    long long llabs(long long arg);
    double fabs(double arg);

#endif /* MOUNTAIN__OS__STDLIB__H__ */