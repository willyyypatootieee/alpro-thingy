#include <stdio.h>

int main () {
    int bil1, bil2;

    printf("Masukkan bilangan pertama: \n");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua: \n");
    scanf("%d", &bil2);

    if (bil1 % bil2 == 0) {
        printf("Bilangan pertama adalah kelipatan persekutuan bilangan kedua\n");
    } else {
        printf("Bilangan pertama bukan kelipatan persekutuan bilangan kedua\n");
    }

    return 0;
}
