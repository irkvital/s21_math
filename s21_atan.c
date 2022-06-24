#include "s21_math.h"

long double s21_atan(double x) {
    long double a = 1 * x, tailor = 1, xx = x * x;
    long double count = 1, out = x;
    if (x < 0) {
        count = - count;
        x = - x;
    }
    if (x == S21_INF) {
        out = S21_PI_HALF;
    } else if (x == - S21_INF) {
        out = - S21_PI_HALF;
    } else if (s21_fabs(x) > 1) {
        out = S21_PI_HALF - s21_atan(1 / x);
    } else {
        for (int i = 2; s21_fabs(tailor) > S21_EPS; i++) {
            a = a * (- 1) * xx;
            tailor = a / (2 * i - 1);
            out += tailor;
            printf("%.20Lf\n", tailor);
            printf("%.20Lf\n\n", out);
        }
    }
    return out * count;
}

