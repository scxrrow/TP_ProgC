#include <stdio.h>


struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {

    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, 
        {0x22, 0xc8, 0x64, 0xff},  
        {0x1e, 0x90, 0xff, 0xff}, 
        {0xff, 0x14, 0x93, 0xff},  
        {0x80, 0x00, 0x80, 0xff},
        {0xff, 0xd7, 0x00, 0xff}, 
        {0x8b, 0x45, 0x13, 0xff},  
        {0x00, 0xff, 0xff, 0xff},  
        {0x32, 0xcd, 0x32, 0xff},  
        {0xdc, 0x14, 0x3c, 0xff}   
    };

  
    for(int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].rouge);
        printf("Vert  : %d\n", couleurs[i].vert);
        printf("Bleu  : %d\n", couleurs[i].bleu);
        printf("Alpha : %d\n", couleurs[i].alpha);
       
        printf("------------------------\n");
    }
}

