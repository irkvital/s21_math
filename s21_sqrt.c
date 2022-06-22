#include "s21_math.h"

long double s21_sqrt(double x) {
    long double res = x;
    long double out = 0;
    long int count = 0;
    if (x >= 0) {
        while((res - out) > S21_EPS || (res - out) < -S21_EPS) {
            out = res;
            res = (x / res + res) / 2;
            count++;
        }
    } else {
        out = S21_NAN;
    }
    return out;
}