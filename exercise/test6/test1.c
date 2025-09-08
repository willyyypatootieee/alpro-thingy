#include <stdio.h>

int main() {
    int n;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if ( n % 2 == 0  ) {   // LENGKAPI
        printf("%d adalah bilangan genap\n", n);
    } else {
        printf("%d adalah bilangan ganjil\n", n);
    }
    return 0;
}
