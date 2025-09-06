#include <stdio.h>

int main() {
    int tiket, total;
    int harga = 50000;

    printf("Jumlah tiket: ");
    scanf("%d", &tiket);

    if (tiket <= 2) {   // salah logika operator
        total = harga * 2;
    } else {
        total = tiket * harga;
    }

    printf("Total = Rp %d\n", total);
}
