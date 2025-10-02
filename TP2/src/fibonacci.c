#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre de termes à générer : ");
    scanf("%d", &n);

    int a = 0, b = 1, temp;

    printf("Suite de Fibonacci : ");
    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1) printf(", ");
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");

}
