#include "./s21_math.h"
#include <math.h>

int main() {
    double inp   = S21_NAN;
    double out   = sqrt(inp);
    double s_out = s21_sqrt(inp);

    printf("%.15lf\n", out);
    printf("%.15lf\n", s_out);

    return 0;
}
