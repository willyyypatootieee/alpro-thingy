#include <stdio.h>

int main() {
    int n, i, total = 0;
    printf("Masukkan n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // error titik koma
        total += i;
    }

    printf("Jumlah = %d\n", total);
}

