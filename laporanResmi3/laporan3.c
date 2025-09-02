#include <stdio.h>

void main() {
    int x, hasil;

    printf("masukkan nilai x: ");
    scanf("%d", &x);

    hasil = 3 * x * x - 5 * x + 6;
    printf("Untuk x = %d, hasil = %d\n", x, hasil);
}