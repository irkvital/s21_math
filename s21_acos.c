#include "s21_math.h"

long double s21_acos(double x) {
    int count = 1;
    // if (x < 0) {
    //     count *= - 1;
        // x = s21_fabs(x);
    // }
    long double out = s21_atan(s21_sqrt(1 - x * x) / x);
    return out * count;
}