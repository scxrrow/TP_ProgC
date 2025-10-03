#include <stdio.h>

int main() {
    char c = 'A';
    short s = 12345;
    int i = 987654;
    long int li = 123456789L;
    long long int lli = 9876543210LL;
    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.618033988749895L;

    char *ptr_c = &c;
    short *ptr_s = &s;
    int *ptr_i = &i;
    long int *ptr_li = &li;
    long long int *ptr_lli = &lli;
    float *ptr_f = &f;
    double *ptr_d = &d;
    long double *ptr_ld = &ld;

    printf("Avant la manipulation :\n");
    printf("char     : adresse = %p, valeur = 0x%x\n", (void*)ptr_c, (unsigned char)*ptr_c);
    printf("short    : adresse = %p, valeur = 0x%hx\n", (void*)ptr_s, *ptr_s);
    printf("int      : adresse = %p, valeur = 0x%x\n", (void*)ptr_i, *ptr_i);
    printf("long     : adresse = %p, valeur = 0x%lx\n", (void*)ptr_li, *ptr_li);
    printf("longlong : adresse = %p, valeur = 0x%llx\n", (void*)ptr_lli, *ptr_lli);
    printf("float    : adresse = %p, valeur = 0x%x\n", (void*)ptr_f, *(unsigned int*)ptr_f);
    printf("double   : adresse = %p, valeur = 0x%llx\n", (void*)ptr_d, *(unsigned long long*)ptr_d);
    printf("\n");

    *ptr_c += 1;
    *ptr_s += 100;
    *ptr_i *= 2;
    *ptr_li += 1000;
    *ptr_lli += 10000;
    *ptr_f *= 2.0f;
    *ptr_d += 1.0;
    *ptr_ld += 1.0L;

    printf("Après la manipulation :\n");
    printf("char     : adresse = %p, valeur = 0x%x\n", (void*)ptr_c, (unsigned char)*ptr_c);
    printf("short    : adresse = %p, valeur = 0x%hx\n", (void*)ptr_s, *ptr_s);
    printf("int      : adresse = %p, valeur = 0x%x\n", (void*)ptr_i, *ptr_i);
    printf("long     : adresse = %p, valeur = 0x%lx\n", (void*)ptr_li, *ptr_li);
    printf("longlong : adresse = %p, valeur = 0x%llx\n", (void*)ptr_lli, *ptr_lli);
    printf("float    : adresse = %p, valeur = 0x%x\n", (void*)ptr_f, *(unsigned int*)ptr_f);
    printf("double   : adresse = %p, valeur = 0x%llx\n", (void*)ptr_d, *(unsigned long long*)ptr_d);

    return 0;
}
