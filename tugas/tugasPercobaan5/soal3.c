#include <stdio.h>

void main() {
    int bilPertama, bilKedua, pilihan, hasil;
    printf("Masukkan angka pertama: \n");
    scanf("%d", &bilPertama);

    printf("Masukkan angka kedua: \n");
    scanf("%d", &bilKedua);

    printf("\nPilih operasi yang ingin dilakukan:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {

    // Operator Penjumlahan
    case 1:
        hasil = bilPertama + bilKedua;
        printf("Hasil Penjumlahan dari %d + %d = %d\n", bilPertama, bilKedua, hasil);
        break;
    // Operator Pengurangan
    case 2:
        hasil = bilPertama - bilKedua;
        printf("Hasil Pengurangan dari %d - %d = %d\n", bilPertama, bilKedua, hasil);
        break;
    // Operator Perkalian
    case 3:
        hasil = bilPertama * bilKedua;
        printf("Hasil Perkalian dari %d * %d = %d\n", bilPertama, bilKedua, hasil);
        break;
    // Operator Pembagian 
    
    if ( bilKedua != 0 ) {
        hasil = bilPertama / bilKedua;
        printf("Hasil Pembagian dari %d / %d = %d\n", bilPertama, bilKedua, hasil);
    } else {
        printf("error: pembagian dengan nol tidak diperbolehkan\n");
        break;
    }
    default: 
    printf("Pilihan tidak valid! Silakan pilih antara 1-4.\n");
    break;
        
    }


}