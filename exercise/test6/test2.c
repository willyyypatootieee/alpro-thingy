#include <stdio.h>

int main() {
    int n, i;
    long long faktorial = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // LENGKAPI
        faktorial = faktorial * i; // LENGKAPI
    }

    printf("Faktorial = %lld\n", faktorial);
    return 0;
}
