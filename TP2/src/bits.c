#include <stdio.h>

int main() {
    unsigned int d = 4096; // Exemple de valeur, à modifier pour tester

    int bits = sizeof(d) * 8; // Nombre total de bits 
    int bit4 = (d >> (bits - 4)) & 1;    // 4ème bit de gauche
    int bit20 = (d >> (bits - 20)) & 1;  // 20ème bit de gauche

    if (bit4 == 1 && bit20 == 1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}


