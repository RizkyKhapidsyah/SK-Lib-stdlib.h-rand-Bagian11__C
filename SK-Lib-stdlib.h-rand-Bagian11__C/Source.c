#define _CRT_RAND_S

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int             i;
    unsigned int    number;
    double          max = 100.0;
    errno_t         err;

    // Menampilkan 10 bilangan bulat acak dalam rentang [ 1,10 ].
    for (i = 0; i < 10; i++) {
        err = rand_s(&number);
        
        if (err != 0) {
            printf_s("The rand_s function failed!\n");
        }
        
        printf_s("  %u\n", (unsigned int)((double)number / ((double)UINT_MAX + 1) * 10.0) + 1);
    }

    printf_s("\n");

    // Tampilkan 10 ganda acak dalam [0, maks).
    for (i = 0; i < 10; i++) {
        err = rand_s(&number);
        
        if (err != 0) {
            printf_s("The rand_s function failed!\n");
        }
        
        printf_s("  %g\n", (double)number / ((double)UINT_MAX + 1) * max);
    }

    _getch();
    return 0;
}