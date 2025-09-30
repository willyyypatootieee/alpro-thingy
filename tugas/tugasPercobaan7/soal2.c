#include <stdio.h>

void main() {
    int a, b, c=0;
    printf("masukkan bilangan untuk dihitung secara triangular: ");
    scanf("%d", &a);
    printf("\n%d", a);

    c =c + a;

    for (b=a - 1; b>=1; b--) {
        printf("+ %d", b);
        c = c + b;
    }
    printf("hasilnya adalah: %d", c);
}