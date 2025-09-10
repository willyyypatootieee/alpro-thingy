#include <stdio.h>

int main() {
    int i, j, n;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            putchar( 'A' );  // LENGKAPI
        }
        putchar('\n'); // pindah baris
    }

    return 0;
}
