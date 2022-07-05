#include "./s21_math.h"
#include <math.h>
#include <limits.h>

int main() {
    // long double inp = - 1.7976931348623157e+308;
    long double inp = - 0.85;
    // printf("%Lf\n", s21_sqrt(1 - inp * inp) / inp);
    double out   = sqrt(inp);
    printf("%.30lf\n", out);
    double s_out = s21_sqrt(inp);
    printf("%.30lf\n", s_out);
    
    // double out  = acos(inp);
    // printf("%.30lf\n", out);
    // double sout = s21_acos(inp);
    // printf("%.30lf\n", sout);
    // printf("!%.30lf\n", out - sout);

    return 0;
}
