#include <stdio.h>

int main() {
    int p, l, t, volume;

    printf("Masukkan panjang: ");
    scanf("%d", &p);
    printf("Masukkan lebar: ");
    scanf("%d", &l);
    printf("Masukkan tinggi: ");
    scanf("%d", &t);

    volume = p * l * t;   // LENGKAPI

    printf("Volume balok = %d\n", volume);
    return 0;
}
