#include <stdio.h>

int main() {
    unsigned int numbers[] = {0, 4096, 65536, 65535, 1024};
    int count = sizeof(numbers) / sizeof(numbers[0]);
    int bits = sizeof(unsigned int) * 8;

    for (int i = 0; i < count; i++) {
        printf("Décimal: %u, Binaire: ", numbers[i]);
        for (int j = bits - 1; j >= 0; j--) {
            printf("%d", (numbers[i] >> j) & 1);
        }
        printf("\n");
    }

}
