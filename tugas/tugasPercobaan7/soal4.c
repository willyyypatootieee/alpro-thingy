#include <stdio.h>

void main() {
    int n, i;

    printf("Perulangan for\n");
    printf("==============\n");
    printf("Masukkan Bilangan : ");
    scanf("%d", &n);



    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("-%d ", i);
        } else {
            printf("%d ", i);
        }
    }
}
