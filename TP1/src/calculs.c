#include <stdio.h>

int main(){
    int somme=0;

    for(int i=1; i<1000; i++){
        if(i%7==0 || i%5==0 && i%11!=0){
            somme+=i;
        }
        else if(i%11==0){
            continue;
        }
        else if(somme >= 5000){
            break;
        }
    }
    printf( "la somme est :", %d, somme);

}



