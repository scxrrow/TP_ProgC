#include <stdio.h>

int main(){
    int i=9;
    for(int j=1; j<i; j++){
        for(int k=1; k<=j; k++){
            if(k==j || k==1 || k==i-1){
                printf("* ");
            }
            else{
                printf("# ");
            }
            
        }
        printf("\n");
    }
    return 0;
}



