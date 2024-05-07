#include "stdlib.h"


int abs(int arg) {
    return (arg > 0) ? arg : -arg;
}
long labs(long arg) {
    return (arg > 0) ? arg : -arg;
}
long long llabs(long long arg) {
    return (arg > 0) ? arg : -arg;
}
double fabs(double arg) {
    return (arg > 0) ? arg : -arg;
}