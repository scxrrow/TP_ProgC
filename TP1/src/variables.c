#include <stdio.h>


int main() {
    // char
    signed char sc = -100;
    unsigned char uc = 200;

    // short
    signed short ss = -30000;
    unsigned short us = 60000;

    // int
    signed int si = -100000;
    unsigned int ui = 3000000000U;

    // long int
    signed long sl = -2000000000L;
    unsigned long ul = 4000000000UL;

    // long long int
    signed long long sll = -9000000000000000000LL;
    unsigned long long ull = 18000000000000000000ULL;

    // float
    float f = 3.14f;

    // double
    double d = 2.718281828;

    // long double
    long double ld = 1.6180339887L;

    // Display values
    printf("signed char: %d\n", sc);
    printf("unsigned char: %u\n", uc);

    printf("signed short: %d\n", ss);
    printf("unsigned short: %u\n", us);

    printf("signed int: %d\n", si);
    printf("unsigned int: %u\n", ui);

    printf("signed long: %ld\n", sl);
    printf("unsigned long: %lu\n", ul);

    printf("signed long long: %lld\n", sll);
    printf("unsigned long long: %llu\n", ull);

    printf("float: %f\n", f);
    printf("double: %f\n", d);
    printf("long double: %Lf\n", ld);
}
