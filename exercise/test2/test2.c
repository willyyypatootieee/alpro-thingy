#include <stdio.h>

int main() {
    int bil;
    printf("Masukkan bilangan: ");
    scanf("%d", bil);

    if (bil % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }
}
