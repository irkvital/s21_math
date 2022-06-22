#include "s21_math.h"

long double s21_sqrt(double x) {
    long double res = x;
    long double out = 0;
    while((res - out) > 1e-12 || (res - out) < -1e-15) {
        out = res;
        res = (x / res + res) * 0.5;
    }
    return out;
}