#include <stdio.h>

int main () {
    int bil1, bil2;

    printf("Masukkan bilangan pertama: \n");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua: \n");
    scanf("%d", &bil2);

    if (bil1 % bil2 == 0) {
        printf("%d adalah kelipatan dari %d\n", bil1, bil2);
    } else {
        printf("%d bukan kelipatan dari %d\n", bil1, bil2);
    }
}