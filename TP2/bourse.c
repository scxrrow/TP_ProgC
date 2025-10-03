#include <stdio.h>

void main(){
    int bourse[15] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 2282, 1689, 2174, 2173, 2290, 1883, 1974};
    int high = 0;
    int perte =0;
    
    for(int i=0; i<15; i++){
        if(bourse[i] > high){
            high = bourse[i];
        }

        if((bourse[i]-high) < perte && (bourse[i]-high)<0){
            perte = bourse[i]-high;
        }
    }
    printf("la plus grosse perte est de %d\n", perte);
}
