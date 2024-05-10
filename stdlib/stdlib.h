#ifndef MOUNTAIN__OS__STDLIB__H__
#define MOUNTAIN__OS__STDLIB__H__
    // CONSTANTS
    #define NULL 0

    // TYPES
    typedef unsigned long size_t;
    // divs
    typedef struct {
        int quot, rem;
    } div_t;
    typedef struct {
        long int quot, rem;
    } ldiv_t;    


    // FUNCTIONS
    // ato*
    int atoi(const char *str);
    long atol(const char *str);
    long long atoll(const char *str);
    //double atof(const char *str);

    // *abs
    int abs(int arg);
    long labs(long arg);
    long long llabs(long long arg);
    double fabs(double arg);

    // rands
    void srand(unsigned long seed);
    int rand();

    // sort and search
    void qsort(void* arr, unsigned element_count, unsigned element_size, int (*comparator)(void*, void*));
    void* bsearch(void* key, void* arr, unsigned element_count, unsigned element_size, int (*comparator)(void*, void*));
#endif /* MOUNTAIN__OS__STDLIB__H__ */
