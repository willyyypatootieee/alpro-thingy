#include <stdio.h>

void main() {
    int n, m, i;

    printf("Perulangan for\n");
    printf("==============\n");
    printf("Masukkan Bilangan : ");
    scanf("%d", &n);

    // bilangan ganjil ke-n = 2n - 1
    m = 2 * n - 1;

    for (i = 1; i <= m; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}
