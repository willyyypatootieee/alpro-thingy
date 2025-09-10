#include <stdio.h>

void main() {
    float Farenheit, Celcius;

    printf("Masukkan suhu dalam farenheit: ");
    scanf("%f", &Celcius);

    Farenheit = Celcius  * 1.8  + 32;

    printf("Hasil Konversi: %.2f Celcius\n", Farenheit  );
}