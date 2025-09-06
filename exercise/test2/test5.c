#include <stdio.h>

int main() {
    int C;
    float F;

    printf("Masukkan Celcius: ");
    scanf("%d", &C); 

    F = C * 1.8 + 32;
    printf("Fahrenheit = %.2f\n", F);  
}
