#include <stdio.h>

// structure memory alignment
typedef struct
{
    double d;
    float f;
    int a;
} Point;

typedef union
{
    char c[32];
    double d;
} Nums;

typedef enum
{
    Ready,
    Busy
} State;

int main()
{
    printf("enum: %lu\n", sizeof(State));
    printf("union: %lu\n", sizeof(Nums));
    printf("struct: %lu\n", sizeof(Point));

    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));

    Nums num;

    num.d = 43.42;
    printf("num.d: %g\n", num.d);

    for (int i = 0; i < 32; i++)
    {
        printf("%c", num.c[i]);
    }

    return 0;
}