#include <stdio.h>

int main(){
    int i = 9;
    int j = 1;
    while (j < i) {
        int k = 1;
        while (k <= j) {
            if (k == j || k == 1 || j == i - 1) {
                printf("*");
            } else {
                printf("#");
            }
            k++;
        }
        printf("\n");
        j++;
    }
}
