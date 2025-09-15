#include <stdio.h>

int main() {
    int bil1, bil2;
    float hasil;

    printf("Masukkan bilangan pertama: \n");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua: \n");
    scanf("%d", &bil2);

    if(bil2 == 0) {
        printf("pembagian tidak dapat dibagi dengan nol\n");

    } else { 
        hasil = (float) bil1 / bil2;
        printf("hasil pembagian %d / %d = %.2f\n", bil1, bil2, hasil);
    }
}