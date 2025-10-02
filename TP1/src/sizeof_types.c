#include <stdio.h>

int main(){
    printf("taille d'un int signé : %zu octet(s)\n", sizeof(signed int));
    printf("taille d'un int non signé : %zu octet(s)\n", sizeof(unsigned int));
    printf("taille d'un char signé : %zu octet(s)\n", sizeof(signed char));
    printf("taille d'un char non signé : %zu octet(\n", sizeof(unsigned char));
    printf("taille d'un float : %zu octet(s)\n", sizeof(float));
    printf("taille d'un double : %zu octet(s)\n", sizeof(double));
    printf("taille d'un long signé : %zu octet(s)\n", sizeof(signed long));
    printf("taille d'un long non signé : %zu octet(s)\n", sizeof(unsigned long));
    printf("la taille d'un short signé est : %zu octet(s)\n", sizeof(signed short));
    printf("la taille d'un short non signé est : %zu octet(s)\n", sizeof(unsigned short));
    printf("la taille d'un long long signé est : %zu octet(s)\n", sizeof(signed long long int));
    printf("la taille d'un long long non signé est : %zu octet(s)\n", sizeof(unsigned long long int));
    printf("la taille d'un long int signé est : %zu octet(s)\n", sizeof(signed long int));
    printf("la taille d'un long int non signé est : %zu octet(s)\n", sizeof(unsigned long int));
    printf("la taille d'un long double est : %zu octet(s)\n", sizeof(long double));


}
