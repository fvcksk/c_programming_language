#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("signed char min: %d\n", CHAR_MIN);
    printf("signed char max: %d\n", CHAR_MAX);
    printf("\n");
    printf("unsigned char min %d\n", 0);
    printf("unsigned char max %d\n", UCHAR_MAX);
    printf("\n");
    printf("signed short min: %d\n", SHRT_MIN);
    printf("signed short max: %d\n", SHRT_MAX);
    printf("\n");
    printf("unsigned short min %d\n", 0);
    printf("unsigned short max %d\n", USHRT_MAX);
    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("\n");
    printf("signed long min: %ld\n", LONG_MIN);
    printf("signed long max: %ld\n", LONG_MAX);
    printf("\n");
    printf("unsigned long min: %d\n", 0);
    printf("unsigned long max: %ld\n", ULONG_MAX);
    printf("\n");
    printf("float min: %f\n", FLT_MIN);
    printf("float max: %f\n", FLT_MAX);
    printf("\n");
    printf("double min: %lf\n", DBL_MIN);
    printf("double max: %lf\n", DBL_MAX);
    printf("\n");

    return 0;
}