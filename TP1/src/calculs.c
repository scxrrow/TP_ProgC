#include <stdio.h>

int main(){
    int somme=0;
    int tmp =0;

    for(int i=1; i<1000; i++){
        if(i%7==0 || i%5==0 && i%11!=0){
            tmp= somme;
            tmp +=i;
            if(tmp >= 5000){
                break;
            }
            else{
                somme +=i;
            }
           
        }
        else if(i%11==0){
            continue;
        }
    }
    printf( "la somme est : %d", somme);

}





