#include "./s21_math.h"
#include <math.h>
#include <limits.h>

int main() {

    long double min = - 2, max = 2;   //  Область определения функции

    long double x = min;
    long double delta = (max - min) / 10;
    int count = 1;
    long double percent = min + delta * count;
    while (x < max) {
        double out  = atan(x);        //  Целевая функция
        double sout = s21_atan(x);    //  Целевая функция
        if ((int)((out - sout) * 1e13) && out == out) {
        printf("%.7Lf ! %.12lf\n", x, out - sout);
        printf("%.12lf\n", out);
        printf("%.12lf\n\n", sout);
        }
        x += 0.0000001;

        // Percent completed
        if (x >= percent) {
            printf("%d%%\n", count * 10);
            count++;
            percent = min + delta * count;
        }
    }


    // long double inp = - 0.8;
    // double out   = atan(inp);
    // printf("%.30lf\n", out);
    // double s_out = s21_atan(inp);
    // printf("%.30lf\n", s_out);

    return 0;
}
