    #include <stdio.h>

    int main() {
        int jam, detik;

        printf("Masukkan jumlah jam: ");
        scanf("%d", &jam);

        // LENGKAPI DI SINI: hitung detik dari jam (1 jam = 3600 detik)
        detik = jam * 3600;

        printf("%d jam = %d detik\n", jam, detik);
        return 0;
    }
