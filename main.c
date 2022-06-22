#include "./s21_math.h"
#include <math.h>

int main() {
    double inp   = 13465862386.8765432345;
    double out   = sqrt(inp);
    double s_out = s21_sqrt(inp);

    printf("%.15lf\n", out);
    printf("%.15lf\n", s_out);
    
    return 0;
}
