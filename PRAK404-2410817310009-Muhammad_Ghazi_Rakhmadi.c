#include <stdio.h>

int main() {
    int pilihan;
    float nilai1, nilai2, hasil;

    do {
        printf("Pilihan program:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilai2);

            switch (pilihan) {
                case 1:
                    hasil = nilai1 + nilai2;
                    printf("Hasil: %.2f\n", hasil);
                    break;
                case 2:
                    hasil = nilai1 - nilai2;
                    printf("Hasil: %.2f\n", hasil);
                    break;
                case 3:
                    hasil = nilai1 * nilai2;
                    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
                    break;
                case 4:
                    if (nilai2 != 0) {
                        hasil = nilai1 / nilai2;
                        printf("Hasil: %.2f\n", hasil);
                    } else {
                        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n\n");
                    }
                    break;
            }
        } else if (pilihan != 5) {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    } while (pilihan != 5);
    printf("Terimakasih, telah menggunakan kalkulator Muhammad Ghazi Rakhmadi\n");
}