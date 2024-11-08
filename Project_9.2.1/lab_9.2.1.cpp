#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

#define N 4 
#define SQR(x) ((x) * (x)) 
#define MAX(y, z) ((y) > (z) ? (y) : (z)) 
#define MIN(y, z) ((y) < (z) ? (y) : (z))


#define PRINTI(w) puts("Control output"); \
printf(#w " = %d\n", w)

#define PRINTR(w) puts("Result:"); \
printf(#w " = %f\n", (float)w)

int main() {
    puts("Lab: Using macros and preprocessing directive");
    int x, y, w; 
    char ch;

    do {

        puts("Input integer values for x and y:");
        if (scanf("%d", &x) != 1) { puts("Invalid input for x."); continue; }
        PRINTI(x);
        if (scanf("%d", &y) != 1) { puts("Invalid input for y."); continue; }
        PRINTI(y);

#if N < 5
        w = MAX(SQR(x) + y + N, x * y * N);
        PRINTI(w); 
#else
        w = MIN(SQR(x) + SQR(y + N), x * y);
        PRINTI(w);
#endif

        puts("Repeat? y / n");
        ch = _getch();
    } while (ch == 'y');

    return 0; 
}
