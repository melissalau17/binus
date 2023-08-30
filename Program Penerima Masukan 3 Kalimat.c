#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi array untuk menyimpan tiga kalimat.
    char kalimat_1[100];
    char kalimat_2[100];
    char kalimat_3[100];

    // Meminta pengguna untuk memasukkan tiga kalimat.
    printf("Kalimat 1 = ");
    scanf("%s", kalimat_1);

    printf("Kalimat 2 = ");
    scanf("%s", kalimat_2);

    printf("Kalimat 3 = ");
    scanf("%s", kalimat_3);

    // Menggabungkan tiga kalimat menjadi satu menggunakan spasi.
    char gabungan_kalimat[300];
    strcpy(gabungan_kalimat, kalimat_1);
    strcat(gabungan_kalimat, " ");
    strcat(gabungan_kalimat, kalimat_2);
    strcat(gabungan_kalimat, " ");
    strcat(gabungan_kalimat, kalimat_3);

    // Menghitung panjang kalimat gabungan.
    int panjang_gabungan = strlen(gabungan_kalimat);

    // Membalik kalimat gabungan.
    char balik_gabungan[300];
    for (int i = panjang_gabungan - 1; i >= 0; i--) {
        balik_gabungan[panjang_gabungan - 1 - i] = gabungan_kalimat[i];
    }
    balik_gabungan[panjang_gabungan] = '\0';

    // Menghitung jumlah karakter dalam setiap kalimat.
    int jumlah_huruf_kalimat_1 = strlen(kalimat_1);
    int jumlah_huruf_kalimat_2 = strlen(kalimat_2);
    int jumlah_huruf_kalimat_3 = strlen(kalimat_3);

    // Menghitung total jumlah karakter dari semua kalimat.
    int total_jumlah_huruf = jumlah_huruf_kalimat_1 + jumlah_huruf_kalimat_2 + jumlah_huruf_kalimat_3;

    // Menampilkan hasil.
    printf("\nHasil output:\n");
    printf("Gabungan 3 buah inputan kalimat = %s\n", gabungan_kalimat);
    printf("Hasil membalik kalimat gabungan = %s\n", balik_gabungan);
    printf("Jumlah Huruf kalimat pertama = %d\n", jumlah_huruf_kalimat_1);
    printf("Jumlah Huruf kalimat kedua = %d\n", jumlah_huruf_kalimat_2);
    printf("Jumlah Huruf kalimat ketiga = %d\n", jumlah_huruf_kalimat_3);
    printf("Total Jumlah huruf = %d\n", total_jumlah_huruf);

    return 0;
}
