#include <stdio.h>

void main() {
    int Celcius, Farenheit;
    
    printf("Program sederhana konversi Celcius ke farenheit\n\n");
    printf("input Celcius: "); 
    scanf("%d", &Celcius);
    Farenheit = Celcius*1.8+32;
   printf("Hasil: %d Farenheit", Farenheit);
}


// // Online C compiler to run C program online
// #include <stdio.h>

// int main(int argc, char *argv[]) {
// float celcius, fahrenheit;


// printf("Masukkan Suhu Dalam Celcius: ");
// scanf("%f", &celcius);

// fahrenheit = celcius*1.8+32;

// printf("Hasil konversi %.2f", fahrenheit);
// }
