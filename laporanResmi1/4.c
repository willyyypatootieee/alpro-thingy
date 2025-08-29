#include <stdio.h>

int main() {
    int a, b;
    int jumlah;
    float rata_rata;
    int kuadrat_a, kuadrat_b;
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    jumlah = a + b;
    rata_rata = (a + b) / 2.0;
    kuadrat_a = a * a;
    kuadrat_b = b * b;
    printf("Jumlah: %d\n", jumlah);
    printf("Rata-rata: %.2f\n", rata_rata);
    printf("Kuadrat bilangan pertama: %d\n", kuadrat_a);
    printf("Kuadrat bilangan kedua: %d\n", kuadrat_b);

}